
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ off_t ;
typedef int io_buf ;


 int VAR_0 ;
 size_t const VAR_1 ;
 scalar_t__ FUNC_0 (int,scalar_t__,int ) ;
 size_t FUNC_1 (int,int *,size_t) ;

__attribute__((used)) static bool
FUNC_2(int VAR_2, io_buf *VAR_3, size_t VAR_4, off_t VAR_5)
{


 if (FUNC_0(VAR_2, VAR_5, VAR_0) != VAR_5) {
  return 1;
 }

 const size_t VAR_6 = FUNC_1(VAR_2, VAR_3, VAR_4);
 if (VAR_6 == VAR_1)
  return 1;

 if (VAR_6 != VAR_4) {
  return 1;
 }

 return 0;
}
