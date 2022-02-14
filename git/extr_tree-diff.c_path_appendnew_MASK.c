
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int len; char const* buf; } ;
struct object_id {int dummy; } ;
struct combine_diff_path {char* path; unsigned int mode; int oid; int * parent; struct combine_diff_path* next; } ;


 int FUNC_0 (struct combine_diff_path*) ;
 size_t FUNC_1 (int,size_t) ;
 int FUNC_2 (char*,char const*,int) ;
 struct object_id const VAR_0 ;
 int FUNC_3 (int *,struct object_id const*) ;
 size_t FUNC_4 (int,int) ;
 struct combine_diff_path* FUNC_5 (size_t) ;

__attribute__((used)) static struct combine_diff_path *FUNC_6(struct combine_diff_path *VAR_1,
 int VAR_2, const struct strbuf *VAR_3, const char *VAR_4, int VAR_5,
 unsigned VAR_6, const struct object_id *VAR_7)
{
 struct combine_diff_path *VAR_8;
 size_t VAR_9 = FUNC_4(VAR_3->len, VAR_5);
 size_t VAR_10 = FUNC_1(VAR_2, VAR_9);


 VAR_8 = VAR_1->next;
 if (VAR_8 && (VAR_10 > (intptr_t)VAR_8->next)) {
  FUNC_0(VAR_8);
 }

 if (!VAR_8) {
  VAR_8 = FUNC_5(VAR_10);





  VAR_8->next = (struct combine_diff_path *)(intptr_t)VAR_10;
 }

 VAR_1->next = VAR_8;

 VAR_8->path = (char *)&(VAR_8->parent[VAR_2]);
 FUNC_2(VAR_8->path, VAR_3->buf, VAR_3->len);
 FUNC_2(VAR_8->path + VAR_3->len, VAR_4, VAR_5);
 VAR_8->path[VAR_9] = 0;
 VAR_8->mode = VAR_6;
 FUNC_3(&VAR_8->oid, VAR_7 ? VAR_7 : &VAR_0);

 return VAR_8;
}
