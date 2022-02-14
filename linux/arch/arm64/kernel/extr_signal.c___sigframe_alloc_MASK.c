
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rt_sigframe_user_layout {size_t limit; size_t size; unsigned long extra_offset; } ;
struct extra_context {int dummy; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t FUNC_0 (size_t,int) ;

__attribute__((used)) static int FUNC_1(struct rt_sigframe_user_layout *VAR_4,
       unsigned long *VAR_5, size_t VAR_6, bool VAR_7)
{
 size_t VAR_8 = FUNC_0(VAR_6, 16);

 if (VAR_8 > VAR_4->limit - VAR_4->size &&
     !VAR_4->extra_offset &&
     VAR_7) {
  int VAR_9;

  VAR_4->limit += VAR_1;
  VAR_9 = FUNC_1(VAR_4, &VAR_4->extra_offset,
           sizeof(struct extra_context), 0);
  if (VAR_9) {
   VAR_4->limit -= VAR_1;
   return VAR_9;
  }


  VAR_4->size += VAR_3;





  VAR_4->limit = VAR_2 - VAR_3;
 }


 if (VAR_8 > VAR_4->limit - VAR_4->size)
  return -VAR_0;

 *VAR_5 = VAR_4->size;
 VAR_4->size += VAR_8;

 return 0;
}
