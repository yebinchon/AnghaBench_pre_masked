
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uintmax_t ;
typedef int uint64_t ;
typedef int u_int ;
typedef int lba_t ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;


 int FUNC_0 (int ) ;
 unsigned int VAR_2 ;
 int FUNC_1 (int ,char*,int ,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static int
FUNC_4(lba_t VAR_6, u_int VAR_7)
{
 uint64_t VAR_8;

 switch (VAR_7) {
 case 129:
  VAR_2 = VAR_0;
  break;
 case 128:
  VAR_2 = VAR_1;
  break;
 default:
  FUNC_0(0);
 }

 VAR_8 = FUNC_3(VAR_6 * VAR_3);

 if (VAR_5)
  FUNC_1(VAR_4, "QCOW: image size = %jd, cluster size = %u\n",
      (uintmax_t)VAR_8, (u_int)(1U << VAR_2));

 return (FUNC_2(VAR_8 / VAR_3));
}
