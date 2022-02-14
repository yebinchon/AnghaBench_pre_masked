
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uverbs_req_iter {scalar_t__ cur; scalar_t__ end; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (void*,scalar_t__,size_t) ;

__attribute__((used)) static int FUNC_1(struct uverbs_req_iter *VAR_2, void *VAR_3,
          size_t VAR_4)
{
 if (VAR_2->cur + VAR_4 > VAR_2->end)
  return -VAR_1;

 if (FUNC_0(VAR_3, VAR_2->cur, VAR_4))
  return -VAR_0;

 VAR_2->cur += VAR_4;
 return 0;
}
