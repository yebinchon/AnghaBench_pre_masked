
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ustar_header {int name; int * typeflag; } ;
struct strbuf {int len; struct ustar_header* buf; } ;
struct object_id {int dummy; } ;
struct archiver_args {int time; struct object_id* commit_oid; } ;
typedef int header ;
struct TYPE_2__ {int hexsz; } ;


 struct strbuf VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ustar_header*,int ,int) ;
 int FUNC_1 (struct object_id const*) ;
 int FUNC_2 (struct archiver_args*,struct ustar_header*,unsigned int,int) ;
 int FUNC_3 (struct strbuf*,char*,int ,int ) ;
 int FUNC_4 (struct strbuf*,char*,int ) ;
 int FUNC_5 (struct strbuf*) ;
 TYPE_1__* VAR_3 ;
 int FUNC_6 (struct ustar_header*,int) ;
 int FUNC_7 (int ,int,char*) ;

__attribute__((used)) static void FUNC_8(struct archiver_args *VAR_4)
{
 const struct object_id *VAR_5 = VAR_4->commit_oid;
 struct strbuf VAR_6 = VAR_0;
 struct ustar_header VAR_7;
 unsigned int VAR_8;

 if (VAR_5)
  FUNC_3(&VAR_6, "comment",
      FUNC_1(VAR_5),
      VAR_3->hexsz);
 if (VAR_4->time > VAR_2) {
  FUNC_4(&VAR_6, "mtime",
           VAR_4->time);
  VAR_4->time = VAR_2;
 }

 if (!VAR_6.len)
  return;

 FUNC_0(&VAR_7, 0, sizeof(VAR_7));
 *VAR_7.typeflag = VAR_1;
 VAR_8 = 0100666;
 FUNC_7(VAR_7.name, sizeof(VAR_7.name), "pax_global_header");
 FUNC_2(VAR_4, &VAR_7, VAR_8, VAR_6.len);
 FUNC_6(&VAR_7, sizeof(VAR_7));
 FUNC_6(VAR_6.buf, VAR_6.len);
 FUNC_5(&VAR_6);
}
