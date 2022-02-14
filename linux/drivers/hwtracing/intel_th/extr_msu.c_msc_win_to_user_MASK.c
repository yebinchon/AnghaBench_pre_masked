
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct msc_win_to_user_struct {size_t buf; size_t offset; } ;


 unsigned long FUNC_0 (size_t,void*,size_t) ;

__attribute__((used)) static unsigned long FUNC_1(void *VAR_0, void *VAR_1, size_t VAR_2)
{
 struct msc_win_to_user_struct *VAR_3 = VAR_0;
 unsigned long VAR_4;

 VAR_4 = FUNC_0(VAR_3->buf + VAR_3->offset, VAR_1, VAR_2);
 VAR_3->offset += VAR_2 - VAR_4;

 return VAR_4;
}
