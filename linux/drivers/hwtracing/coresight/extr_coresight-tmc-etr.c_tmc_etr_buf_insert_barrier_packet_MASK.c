
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct etr_buf {int dummy; } ;
typedef scalar_t__ ssize_t ;
typedef scalar_t__ s64 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (struct etr_buf*,scalar_t__,scalar_t__,char**) ;

__attribute__((used)) static inline s64
FUNC_3(struct etr_buf *VAR_2, u64 VAR_3)
{
 ssize_t VAR_4;
 char *VAR_5;

 VAR_4 = FUNC_2(VAR_2, VAR_3,
       VAR_0, &VAR_5);
 if (FUNC_0(VAR_4 < VAR_0))
  return -VAR_1;
 FUNC_1(VAR_5);
 return VAR_3 + VAR_0;
}
