
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {char* buf; int len; } ;
struct object_id {int dummy; } ;
struct commit_graft {int nr_parent; struct object_id* parent; struct object_id oid; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*,char const*) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (char const*,struct object_id*,char const**) ;
 int FUNC_4 (int,int ) ;
 int FUNC_5 (int,int) ;
 int FUNC_6 (struct strbuf*) ;
 struct commit_graft* FUNC_7 (int ) ;

struct commit_graft *FUNC_8(struct strbuf *VAR_0)
{

 int VAR_1, VAR_2;
 const char *VAR_3 = ((void*)0);
 struct commit_graft *VAR_4 = ((void*)0);
 struct object_id VAR_5, *VAR_6;

 FUNC_6(VAR_0);
 if (!VAR_0->len || VAR_0->buf[0] == '#')
  return ((void*)0);




 for (VAR_2 = 0; VAR_2 < 2; VAR_2++) {
  VAR_6 = VAR_4 ? &VAR_4->oid : &VAR_5;
  if (FUNC_3(VAR_0->buf, VAR_6, &VAR_3))
   goto bad_graft_data;
  for (VAR_1 = 0; *VAR_3 != '\0'; VAR_1++) {
   VAR_6 = VAR_4 ? &VAR_4->parent[VAR_1] : &VAR_5;
   if (!FUNC_2(*VAR_3++) || FUNC_3(VAR_3, VAR_6, &VAR_3))
    goto bad_graft_data;
  }
  if (!VAR_4) {
   VAR_4 = FUNC_7(FUNC_4(sizeof(*VAR_4),
            FUNC_5(sizeof(struct object_id), VAR_1)));
   VAR_4->nr_parent = VAR_1;
  }
 }
 return VAR_4;

bad_graft_data:
 FUNC_1("bad graft data: %s", VAR_0->buf);
 FUNC_0(!VAR_4);
 return ((void*)0);
}
