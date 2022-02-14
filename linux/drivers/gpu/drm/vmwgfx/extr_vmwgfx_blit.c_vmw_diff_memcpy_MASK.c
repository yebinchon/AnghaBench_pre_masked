
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct vmw_diff_cpy {size_t cpp; size_t line_offset; } ;
typedef size_t ssize_t ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int *,int const*,size_t) ;
 size_t FUNC_2 (size_t,size_t) ;
 int FUNC_3 (struct vmw_diff_cpy*,size_t) ;
 size_t FUNC_4 (int *,int const*,size_t,size_t) ;
 size_t FUNC_5 (int *,int const*,size_t,size_t) ;

void FUNC_6(struct vmw_diff_cpy *VAR_0, u8 *VAR_1, const u8 *VAR_2,
       size_t VAR_3)
{
 ssize_t VAR_4, VAR_5;

 if (FUNC_0(FUNC_2(VAR_3, VAR_0->cpp) != VAR_3))
  return;


 VAR_4 = FUNC_4(VAR_1, VAR_2, VAR_3, VAR_0->cpp);
 if (VAR_4 < VAR_3) {
  FUNC_3(VAR_0, VAR_4);
  VAR_5 = VAR_0->cpp;





  VAR_0->line_offset += VAR_4;
  VAR_1 += VAR_4;
  VAR_2 += VAR_4;
  VAR_3 -= VAR_4;
  VAR_4 = FUNC_5(VAR_1, VAR_2, VAR_3, VAR_0->cpp);
  if (VAR_4 >= 0) {
   VAR_5 += VAR_4;
   FUNC_3(VAR_0, VAR_4);
  }
  FUNC_1(VAR_1, VAR_2, VAR_5);
 }
 VAR_0->line_offset += VAR_3;
}
