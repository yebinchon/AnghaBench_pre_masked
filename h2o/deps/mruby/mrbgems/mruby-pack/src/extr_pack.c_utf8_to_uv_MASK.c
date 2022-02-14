
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mrb_state ;


 int VAR_0 ;
 int FUNC_0 (long) ;
 int FUNC_1 (int *,int ,char*) ;
 int FUNC_2 (int *,int ,char*,int ,int ) ;
 unsigned long* VAR_1 ;

__attribute__((used)) static unsigned long
FUNC_3(mrb_state *VAR_2, const char *VAR_3, long *VAR_4)
{
  int VAR_5 = *VAR_3++ & 0xff;
  unsigned long VAR_6 = VAR_5;
  long VAR_7 = 1;

  if (!(VAR_6 & 0x80)) {
    *VAR_4 = 1;
    return VAR_6;
  }
  if (!(VAR_6 & 0x40)) {
    *VAR_4 = 1;
    FUNC_1(VAR_2, VAR_0, "malformed UTF-8 character");
  }

  if (!(VAR_6 & 0x20)) { VAR_7 = 2; VAR_6 &= 0x1f; }
  else if (!(VAR_6 & 0x10)) { VAR_7 = 3; VAR_6 &= 0x0f; }
  else if (!(VAR_6 & 0x08)) { VAR_7 = 4; VAR_6 &= 0x07; }
  else if (!(VAR_6 & 0x04)) { VAR_7 = 5; VAR_6 &= 0x03; }
  else if (!(VAR_6 & 0x02)) { VAR_7 = 6; VAR_6 &= 0x01; }
  else {
    *VAR_4 = 1;
    FUNC_1(VAR_2, VAR_0, "malformed UTF-8 character");
  }
  if (VAR_7 > *VAR_4) {
    FUNC_2(VAR_2, VAR_0, "malformed UTF-8 character (expected %S bytes, given %S bytes)",
               FUNC_0(VAR_7), FUNC_0(*VAR_4));
  }
  *VAR_4 = VAR_7--;
  if (VAR_7 != 0) {
    while (VAR_7--) {
      VAR_5 = *VAR_3++ & 0xff;
      if ((VAR_5 & 0xc0) != 0x80) {
        *VAR_4 -= VAR_7 + 1;
        FUNC_1(VAR_2, VAR_0, "malformed UTF-8 character");
      }
      else {
        VAR_5 &= 0x3f;
        VAR_6 = VAR_6 << 6 | VAR_5;
      }
    }
  }
  VAR_7 = *VAR_4 - 1;
  if (VAR_6 < VAR_1[VAR_7]) {
    FUNC_1(VAR_2, VAR_0, "redundant UTF-8 sequence");
  }
  return VAR_6;
}
