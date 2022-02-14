
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct strbuf {int len; int buf; } ;
struct stat {int st_size; int st_mode; } ;
struct repository {int index; } ;
struct diff_tempfile {char* name; int mode; int hex; } ;
struct diff_filespec {int mode; int oid; int size; int data; int path; scalar_t__ oid_valid; } ;


 int FUNC_0 (struct diff_filespec*) ;
 scalar_t__ VAR_0 ;
 struct strbuf VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 struct diff_tempfile* FUNC_3 () ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (char*,char const*) ;
 scalar_t__ FUNC_6 (struct repository*,struct diff_filespec*,int ) ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_7 (char const*,struct stat*) ;
 int VAR_4 ;
 int FUNC_8 (int ,int *) ;
 int FUNC_9 (int ,char const*,struct diff_tempfile*,int ,int ,int *,int ) ;
 scalar_t__ FUNC_10 (int ,char const*,int *,int) ;
 scalar_t__ FUNC_11 (struct strbuf*,char const*,int ) ;
 int FUNC_12 (struct strbuf*) ;
 int FUNC_13 (int ,int,char*,...) ;

__attribute__((used)) static struct diff_tempfile *FUNC_14(struct repository *VAR_5,
            const char *VAR_6,
            struct diff_filespec *VAR_7)
{
 struct diff_tempfile *VAR_8 = FUNC_3();

 if (!FUNC_0(VAR_7)) {
 not_a_valid_file:



  VAR_8->name = "/dev/null";
  FUNC_13(VAR_8->hex, sizeof(VAR_8->hex), ".");
  FUNC_13(VAR_8->mode, sizeof(VAR_8->mode), ".");
  return VAR_8;
 }

 if (!FUNC_1(VAR_7->mode) &&
     (!VAR_7->oid_valid ||
      FUNC_10(VAR_5->index, VAR_6, &VAR_7->oid, 1))) {
  struct stat VAR_9;
  if (FUNC_7(VAR_6, &VAR_9) < 0) {
   if (VAR_3 == VAR_0)
    goto not_a_valid_file;
   FUNC_5("stat(%s)", VAR_6);
  }
  if (FUNC_2(VAR_9.st_mode)) {
   struct strbuf VAR_10 = VAR_1;
   if (FUNC_11(&VAR_10, VAR_6, VAR_9.st_size) < 0)
    FUNC_5("readlink(%s)", VAR_6);
   FUNC_9(VAR_5->index, VAR_6, VAR_8, VAR_10.buf, VAR_10.len,
           (VAR_7->oid_valid ?
     &VAR_7->oid : &VAR_4),
           (VAR_7->oid_valid ?
     VAR_7->mode : VAR_2));
   FUNC_12(&VAR_10);
  }
  else {

   VAR_8->name = VAR_6;
   if (!VAR_7->oid_valid)
    FUNC_8(VAR_8->hex, &VAR_4);
   else
    FUNC_8(VAR_8->hex, &VAR_7->oid);






   FUNC_13(VAR_8->mode, sizeof(VAR_8->mode), "%06o", VAR_7->mode);
  }
  return VAR_8;
 }
 else {
  if (FUNC_6(VAR_5, VAR_7, 0))
   FUNC_4("cannot read data blob for %s", VAR_7->path);
  FUNC_9(VAR_5->index, VAR_6, VAR_8,
          VAR_7->data, VAR_7->size,
          &VAR_7->oid, VAR_7->mode);
 }
 return VAR_8;
}
