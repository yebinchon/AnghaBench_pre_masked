
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (void*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,void*) ;
 int FUNC_3 (int ,int ,int ,int ,char*,void*) ;

__attribute__((used)) static int FUNC_4(void *VAR_4, int VAR_5)
{
 int VAR_6;

 if (VAR_5) {
  VAR_6 = FUNC_3(VAR_1, VAR_2,
    VAR_3, 0, "sd_insert", VAR_4);
  if (VAR_6)
   goto out;

  VAR_6 = FUNC_3(VAR_0, VAR_2,
    VAR_3, 0, "sd_eject", VAR_4);
  if (VAR_6) {
   FUNC_2(VAR_1, VAR_4);
   goto out;
  }

  if (FUNC_0(VAR_4))
   FUNC_1(VAR_0);
  else
   FUNC_1(VAR_1);

 } else {
  FUNC_2(VAR_1, VAR_4);
  FUNC_2(VAR_0, VAR_4);
 }
 VAR_6 = 0;
out:
 return VAR_6;
}
