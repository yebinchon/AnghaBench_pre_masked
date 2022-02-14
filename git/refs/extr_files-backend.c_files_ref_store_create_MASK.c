
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int buf; } ;
struct ref_store {int dummy; } ;
struct files_ref_store {unsigned int store_flags; int gitcommondir; int gitdir; int packed_ref_store; } ;


 struct strbuf VAR_0 ;
 int FUNC_0 (struct ref_store*,int *) ;
 int FUNC_1 (char*,int *) ;
 int FUNC_2 (struct strbuf*,char const*) ;
 int FUNC_3 (int ,unsigned int) ;
 int VAR_1 ;
 int FUNC_4 (struct strbuf*,char*,int ) ;
 int FUNC_5 (struct strbuf*,int *) ;
 int FUNC_6 (struct strbuf*) ;
 struct files_ref_store* FUNC_7 (int,int) ;
 int FUNC_8 (char const*) ;

__attribute__((used)) static struct ref_store *FUNC_9(const char *VAR_2,
      unsigned int VAR_3)
{
 struct files_ref_store *VAR_4 = FUNC_7(1, sizeof(*VAR_4));
 struct ref_store *VAR_5 = (struct ref_store *)VAR_4;
 struct strbuf VAR_6 = VAR_0;

 FUNC_0(VAR_5, &VAR_1);
 VAR_4->store_flags = VAR_3;

 VAR_4->gitdir = FUNC_8(VAR_2);
 FUNC_2(&VAR_6, VAR_2);
 VAR_4->gitcommondir = FUNC_5(&VAR_6, ((void*)0));
 FUNC_4(&VAR_6, "%s/packed-refs", VAR_4->gitcommondir);
 VAR_4->packed_ref_store = FUNC_3(VAR_6.buf, VAR_3);
 FUNC_6(&VAR_6);

 FUNC_1("files-backend $GIT_DIR",
         &VAR_4->gitdir);
 FUNC_1("files-backend $GIT_COMMONDIR",
         &VAR_4->gitcommondir);

 return VAR_5;
}
