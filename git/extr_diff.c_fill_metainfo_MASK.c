
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct strbuf {int dummy; } ;
struct TYPE_3__ {scalar_t__ binary; scalar_t__ full_index; } ;
struct diff_options {int repo; TYPE_1__ flags; } ;
struct diff_filespec {char const* mode; int oid; } ;
struct diff_filepair {int status; int score; } ;
typedef int mmfile_t ;
struct TYPE_4__ {unsigned int hexsz; } ;


 unsigned int const VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;



 int VAR_3 ;
 int FUNC_0 (int *,int) ;
 scalar_t__ FUNC_1 (int ,struct diff_filespec*) ;
 char* FUNC_2 (int,int ) ;
 char* FUNC_3 (struct diff_options*) ;
 int FUNC_4 (int ,int *,struct diff_filespec*) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (char const*,struct strbuf*,int *,int ) ;
 int FUNC_7 (struct diff_filepair*) ;
 int FUNC_8 (struct strbuf*,char*,char const*,...) ;
 int FUNC_9 (struct strbuf*,int) ;
 TYPE_2__* VAR_4 ;

__attribute__((used)) static void FUNC_10(struct strbuf *VAR_5,
     const char *VAR_6,
     const char *VAR_7,
     struct diff_filespec *VAR_8,
     struct diff_filespec *VAR_9,
     struct diff_options *VAR_10,
     struct diff_filepair *VAR_11,
     int *VAR_12,
     int VAR_13)
{
 const char *VAR_14 = FUNC_2(VAR_13, VAR_1);
 const char *VAR_15 = FUNC_2(VAR_13, VAR_2);
 const char *VAR_16 = FUNC_3(VAR_10);

 *VAR_12 = 1;
 FUNC_9(VAR_5, VAR_3 * 2 + 300);
 switch (VAR_11->status) {
 case 130:
  FUNC_8(VAR_5, "%s%ssimilarity index %d%%",
       VAR_16, VAR_14, FUNC_7(VAR_11));
  FUNC_8(VAR_5, "%s\n%s%scopy from ",
       VAR_15, VAR_16, VAR_14);
  FUNC_6(VAR_6, VAR_5, ((void*)0), 0);
  FUNC_8(VAR_5, "%s\n%s%scopy to ", VAR_15, VAR_16, VAR_14);
  FUNC_6(VAR_7, VAR_5, ((void*)0), 0);
  FUNC_8(VAR_5, "%s\n", VAR_15);
  break;
 case 128:
  FUNC_8(VAR_5, "%s%ssimilarity index %d%%",
       VAR_16, VAR_14, FUNC_7(VAR_11));
  FUNC_8(VAR_5, "%s\n%s%srename from ",
       VAR_15, VAR_16, VAR_14);
  FUNC_6(VAR_6, VAR_5, ((void*)0), 0);
  FUNC_8(VAR_5, "%s\n%s%srename to ",
       VAR_15, VAR_16, VAR_14);
  FUNC_6(VAR_7, VAR_5, ((void*)0), 0);
  FUNC_8(VAR_5, "%s\n", VAR_15);
  break;
 case 129:
  if (VAR_11->score) {
   FUNC_8(VAR_5, "%s%sdissimilarity index %d%%%s\n",
        VAR_16,
        VAR_14, FUNC_7(VAR_11), VAR_15);
   break;
  }

 default:
  *VAR_12 = 0;
 }
 if (VAR_8 && VAR_9 && !FUNC_5(&VAR_8->oid, &VAR_9->oid)) {
  const unsigned VAR_17 = VAR_4->hexsz;
  int VAR_18 = VAR_10->flags.full_index ? VAR_17 : VAR_0;

  if (VAR_10->flags.binary) {
   mmfile_t VAR_19;
   if ((!FUNC_4(VAR_10->repo, &VAR_19, VAR_8) &&
        FUNC_1(VAR_10->repo, VAR_8)) ||
       (!FUNC_4(VAR_10->repo, &VAR_19, VAR_9) &&
        FUNC_1(VAR_10->repo, VAR_9)))
    VAR_18 = VAR_17;
  }
  FUNC_8(VAR_5, "%s%sindex %s..%s", VAR_16, VAR_14,
       FUNC_0(&VAR_8->oid, VAR_18),
       FUNC_0(&VAR_9->oid, VAR_18));
  if (VAR_8->mode == VAR_9->mode)
   FUNC_8(VAR_5, " %06o", VAR_8->mode);
  FUNC_8(VAR_5, "%s\n", VAR_15);
 }
}
