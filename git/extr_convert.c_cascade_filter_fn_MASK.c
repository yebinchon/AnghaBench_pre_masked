
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stream_filter {int dummy; } ;
struct cascade_filter {size_t ptr; size_t end; char const* buf; int two; int one; } ;


 scalar_t__ FUNC_0 (int ,char const*,size_t*,char*,size_t*) ;

__attribute__((used)) static int FUNC_1(struct stream_filter *VAR_0,
        const char *VAR_1, size_t *VAR_2,
        char *VAR_3, size_t *VAR_4)
{
 struct cascade_filter *VAR_5 = (struct cascade_filter *) VAR_0;
 size_t VAR_6 = 0;
 size_t VAR_7 = *VAR_4;
 size_t VAR_8, VAR_9;




 while (VAR_6 < VAR_7) {
  VAR_9 = VAR_7 - VAR_6;


  if (VAR_5->ptr < VAR_5->end) {
   VAR_8 = VAR_5->end - VAR_5->ptr;
   if (FUNC_0(VAR_5->two,
       VAR_5->buf + VAR_5->ptr, &VAR_8,
       VAR_3 + VAR_6, &VAR_9))
    return -1;
   VAR_5->ptr += (VAR_5->end - VAR_5->ptr) - VAR_8;
   VAR_6 = VAR_7 - VAR_9;
   continue;
  }


  VAR_8 = VAR_1 ? *VAR_2 : 0;
  if (VAR_1 && !VAR_8)
   break;
  VAR_9 = sizeof(VAR_5->buf);
  if (FUNC_0(VAR_5->one,
      VAR_1, &VAR_8,
      VAR_5->buf, &VAR_9))
   return -1;
  VAR_5->end = sizeof(VAR_5->buf) - VAR_9;
  VAR_5->ptr = 0;
  if (VAR_1) {
   size_t VAR_10 = *VAR_2 - VAR_8;
   *VAR_2 -= VAR_10;
   VAR_1 += VAR_10;
  }


  if (VAR_1 || VAR_5->end)
   continue;


  VAR_8 = 0;
  VAR_9 = VAR_7 - VAR_6;
  if (FUNC_0(VAR_5->two,
      ((void*)0), &VAR_8,
      VAR_3 + VAR_6, &VAR_9))
   return -1;
  if (VAR_9 == (VAR_7 - VAR_6))
   break;
  VAR_6 = VAR_7 - VAR_9;
 }
 *VAR_4 -= VAR_6;
 return 0;
}
