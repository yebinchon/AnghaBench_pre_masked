
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int len; int buf; } ;
struct pathspec {int dummy; } ;
struct index_state {int dummy; } ;
struct dir_struct {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct strbuf VAR_2 ;
 int FUNC_0 (int ) ;
 char* FUNC_1 (char const*,char,int) ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_2 (int ,int ,struct pathspec const*) ;
 int FUNC_3 (struct strbuf*,char const*,int) ;
 int FUNC_4 (struct strbuf*) ;
 int FUNC_5 (struct strbuf*,int ) ;
 scalar_t__ FUNC_6 (struct dir_struct*,int *,struct index_state*,struct strbuf*,int,struct pathspec const*,int ,int *) ;

__attribute__((used)) static int FUNC_7(struct dir_struct *VAR_4,
         struct index_state *VAR_5,
         const char *VAR_6, int VAR_7,
         const struct pathspec *VAR_8)
{
 struct strbuf VAR_9 = VAR_2;
 int VAR_10, VAR_11 = 0;
 const char *VAR_12;
 int VAR_13 = VAR_4->flags;

 while (VAR_7 && VAR_6[VAR_7 - 1] == '/')
  VAR_7--;
 if (!VAR_7)
  return 1;
 VAR_10 = 0;
 VAR_4->flags &= ~VAR_0;
 while (1) {
  VAR_12 = VAR_6 + VAR_10 + !!VAR_10;
  VAR_12 = FUNC_1(VAR_12, '/', VAR_6 + VAR_7 - VAR_12);
  if (!VAR_12)
   VAR_10 = VAR_7;
  else
   VAR_10 = VAR_12 - VAR_6;
  FUNC_5(&VAR_9, 0);
  FUNC_3(&VAR_9, VAR_6, VAR_10);
  if (!FUNC_0(VAR_9.buf))
   break;
  if (FUNC_2(VAR_9.buf, VAR_9.len, VAR_8))
   break;
  if (FUNC_6(VAR_4, ((void*)0), VAR_5, &VAR_9, VAR_10, VAR_8,
       VAR_1, ((void*)0)) == VAR_3)
   break;
  if (VAR_7 <= VAR_10) {
   VAR_11 = 1;
   break;
  }
 }
 FUNC_4(&VAR_9);
 VAR_4->flags = VAR_13;
 return VAR_11;
}
