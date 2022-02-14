
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int timestamp_t ;
struct strbuf {char* buf; int len; } ;
struct object_id {int dummy; } ;
typedef int (* each_reflog_ent_fn ) (struct object_id*,struct object_id*,char const*,int ,int,char*,void*) ;


 int FUNC_0 (char) ;
 scalar_t__ FUNC_1 (char const*,struct object_id*,char const**) ;
 int FUNC_2 (char*,char**,int) ;
 char* FUNC_3 (char const*,char) ;
 int FUNC_4 (char*,int *,int) ;

__attribute__((used)) static int FUNC_5(struct strbuf *VAR_0, each_reflog_ent_fn VAR_1, void *VAR_2)
{
 struct object_id VAR_3, VAR_4;
 char *VAR_5, *VAR_6;
 timestamp_t VAR_7;
 int VAR_8;
 const char *VAR_9 = VAR_0->buf;


 if (!VAR_0->len || VAR_0->buf[VAR_0->len - 1] != '\n' ||
     FUNC_1(VAR_9, &VAR_3, &VAR_9) || *VAR_9++ != ' ' ||
     FUNC_1(VAR_9, &VAR_4, &VAR_9) || *VAR_9++ != ' ' ||
     !(VAR_5 = FUNC_3(VAR_9, '>')) ||
     VAR_5[1] != ' ' ||
     !(VAR_7 = FUNC_2(VAR_5 + 2, &VAR_6, 10)) ||
     !VAR_6 || VAR_6[0] != ' ' ||
     (VAR_6[1] != '+' && VAR_6[1] != '-') ||
     !FUNC_0(VAR_6[2]) || !FUNC_0(VAR_6[3]) ||
     !FUNC_0(VAR_6[4]) || !FUNC_0(VAR_6[5]))
  return 0;
 VAR_5[1] = '\0';
 VAR_8 = FUNC_4(VAR_6 + 1, ((void*)0), 10);
 if (VAR_6[6] != '\t')
  VAR_6 += 6;
 else
  VAR_6 += 7;
 return VAR_1(&VAR_3, &VAR_4, VAR_9, VAR_7, VAR_8, VAR_6, VAR_2);
}
