
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
struct kobject {int dummy; } ;
typedef int irqreturn_t ;
typedef int __be64 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__,scalar_t__,scalar_t__) ;
 int VAR_3 ;
 int FUNC_3 (struct kobject*) ;
 struct kobject* FUNC_4 (int ,char*) ;
 int FUNC_5 (int *,int *,int *) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*,char*,scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_8(int VAR_4, void *VAR_5)
{
 __be64 VAR_6;
 __be64 VAR_7;
 __be64 VAR_8;
 uint64_t VAR_9;
 uint64_t VAR_10;
 uint64_t VAR_11;
 int VAR_12;
 char VAR_13[2+16+1];
 struct kobject *VAR_14;

 VAR_12 = FUNC_5(&VAR_7, &VAR_6, &VAR_8);
 if (VAR_12 != VAR_2) {
  FUNC_6("ELOG: OPAL log info read failed\n");
  return VAR_0;
 }

 VAR_9 = FUNC_1(VAR_6);
 VAR_10 = FUNC_1(VAR_7);
 VAR_11 = FUNC_1(VAR_8);

 FUNC_0(VAR_9 > VAR_1);

 if (VAR_9 >= VAR_1)
  VAR_9 = VAR_1;

 FUNC_7(VAR_13, "0x%llx", VAR_10);





 VAR_14 = FUNC_4(VAR_3, VAR_13);
 if (VAR_14) {

  FUNC_3(VAR_14);
  return VAR_0;
 }

 FUNC_2(VAR_10, VAR_9, VAR_11);

 return VAR_0;
}
