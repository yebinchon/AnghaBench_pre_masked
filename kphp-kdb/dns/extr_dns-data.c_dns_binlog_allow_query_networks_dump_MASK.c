
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {unsigned int ipv4; int prefix_bits; } ;
struct TYPE_3__ {int prefix_bits; int ipv6; } ;


 TYPE_2__* VAR_0 ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 char* FUNC_0 (int ) ;
 int FUNC_1 (char*,int,char*,...) ;

int FUNC_2 (char *VAR_4, int VAR_5) {
  int VAR_6, VAR_7 = 0;
  for (VAR_6 = 0; VAR_6 < VAR_2; VAR_6++) {
    unsigned int VAR_8 = VAR_0[VAR_6].ipv4;
    if (VAR_7) {
      if (VAR_5 <= 2) {
        return -1;
      }
      *VAR_4++ = ',';
      *VAR_4++ = ' ';
      VAR_5 -= 2;
    }
    int VAR_9 = FUNC_1 (VAR_4, VAR_5, "%d.%d.%d.%d/%d", VAR_8 >> 24, (VAR_8 >> 16) & 0xff, (VAR_8 >> 8) & 0xff, VAR_8 & 0xff, VAR_0[VAR_6].prefix_bits);
    if (VAR_9 >= VAR_5) {
      return -1;
    }
    VAR_4 += VAR_9;
    VAR_5 -= VAR_9;
    VAR_7++;
  }
  for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++) {
    if (VAR_7) {
      if (VAR_5 <= 2) {
        return -1;
      }
      *VAR_4++ = ',';
      *VAR_4++ = ' ';
      VAR_5 -= 2;
    }
    int VAR_10 = FUNC_1 (VAR_4, VAR_5, "%s/%d", FUNC_0 (VAR_1[VAR_6].ipv6), VAR_1[VAR_6].prefix_bits);
    if (VAR_10 >= VAR_5) {
      return -1;
    }
    VAR_4 += VAR_10;
    VAR_5 -= VAR_10;
    VAR_7++;
  }
  if (VAR_5 <= 0) {
    return -1;
  }
  *VAR_4 = 0;
  return 0;
}
