
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ulong ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,char*,int,...) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int) ;
 scalar_t__ FUNC_4 (int,int ) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int
FUNC_5(ulong *VAR_4, ulong VAR_5, int VAR_6)
{
 ulong VAR_7;
 ulong VAR_8;
 int VAR_9 = 0;
 enum {


  NPERSHELF = 16,
 };

 if (VAR_6 >= NPERSHELF) {
  FUNC_0("aoe: %s %d slots per shelf\n",
   "static minor device numbers support only",
   NPERSHELF);
  VAR_9 = -1;
  goto out;
 }

 VAR_8 = VAR_5 * NPERSHELF + VAR_6;
 if (VAR_8 >= VAR_1) {
  FUNC_0("aoe: %s with e%ld.%d\n",
   "cannot use static minor device numbers",
   VAR_5, VAR_6);
  VAR_9 = -1;
  goto out;
 }

 FUNC_2(&VAR_3, VAR_7);
 if (FUNC_4(VAR_8, VAR_2)) {
  FUNC_0("aoe: %s %lu\n",
   "existing device already has static minor number",
   VAR_8);
  VAR_9 = -1;
 } else
  FUNC_1(VAR_8, VAR_2);
 FUNC_3(&VAR_3, VAR_7);
 *VAR_4 = VAR_8 * VAR_0;
out:
 return VAR_9;
}
