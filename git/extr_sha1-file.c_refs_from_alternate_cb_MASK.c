
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {size_t len; int buf; } ;
struct object_directory {int path; } ;
struct alternate_refs_data {int data; int fn; } ;


 struct strbuf VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (struct strbuf*,char*) ;
 int FUNC_3 (struct strbuf*,int ,int ) ;
 int FUNC_4 (struct strbuf*) ;
 int FUNC_5 (struct strbuf*,size_t) ;
 int FUNC_6 (struct strbuf*,char*) ;

__attribute__((used)) static int FUNC_7(struct object_directory *VAR_1,
      void *VAR_2)
{
 struct strbuf VAR_3 = VAR_0;
 size_t VAR_4;
 struct alternate_refs_data *VAR_5 = VAR_2;

 if (!FUNC_3(&VAR_3, VAR_1->path, 0))
  goto out;
 if (!FUNC_6(&VAR_3, "/objects"))
  goto out;
 VAR_4 = VAR_3.len;


 FUNC_2(&VAR_3, "/refs");
 if (!FUNC_0(VAR_3.buf))
  goto out;
 FUNC_5(&VAR_3, VAR_4);

 FUNC_1(VAR_3.buf, VAR_5->fn, VAR_5->data);

out:
 FUNC_4(&VAR_3);
 return 0;
}
