
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ics {int dummy; } ;
typedef int int8_t ;
typedef scalar_t__ int64_t ;
typedef int __be16 ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (unsigned int,int *,int ) ;
 int FUNC_2 (unsigned int,int *) ;
 scalar_t__ FUNC_3 (unsigned int,int *,int *) ;
 scalar_t__ FUNC_4 (unsigned int) ;

__attribute__((used)) static int FUNC_5(struct ics *VAR_8, unsigned int VAR_9)
{
 unsigned int VAR_10 = (unsigned int)FUNC_4(VAR_9);
 int64_t VAR_11;
 __be16 VAR_12;
 int8_t VAR_13;

 if (FUNC_0(VAR_10 == VAR_3 || VAR_10 == VAR_4))
  return -VAR_0;


 VAR_11 = FUNC_3(VAR_10, &VAR_12, &VAR_13);
 if (VAR_11 != VAR_2)
  return -VAR_1;

 FUNC_1(VAR_9, &VAR_7, VAR_5);
 FUNC_2(VAR_9, &VAR_6);

 return 0;
}
