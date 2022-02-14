
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct image {char* buf; size_t len; int line_allocated; int line; } ;


 int FUNC_0 (struct image*,char const*,int,int ) ;
 int FUNC_1 (struct image*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct image *VAR_0, char *VAR_1, size_t VAR_2,
     int VAR_3)
{
 const char *VAR_4, *VAR_5;

 FUNC_1(VAR_0, 0, sizeof(*VAR_0));
 VAR_0->buf = VAR_1;
 VAR_0->len = VAR_2;

 if (!VAR_3)
  return;

 VAR_5 = VAR_0->buf + VAR_0->len;
 VAR_4 = VAR_0->buf;
 while (VAR_4 < VAR_5) {
  const char *VAR_6;
  for (VAR_6 = VAR_4; VAR_6 < VAR_5 && *VAR_6 != '\n'; VAR_6++)
   ;
  if (VAR_6 < VAR_5)
   VAR_6++;
  FUNC_0(VAR_0, VAR_4, VAR_6 - VAR_4, 0);
  VAR_4 = VAR_6;
 }
 VAR_0->line = VAR_0->line_allocated;
}
