
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {TYPE_2__* tempfile; } ;
struct ref_lock {TYPE_3__ lk; } ;
struct files_ref_store {int dummy; } ;
struct TYPE_4__ {char const* buf; } ;
struct TYPE_5__ {int fp; TYPE_1__ filename; } ;


 scalar_t__ FUNC_0 (struct ref_lock*) ;
 int FUNC_1 (struct ref_lock*,char const*) ;
 int VAR_0 ;
 int FUNC_2 (char*,char const*,char*) ;
 int FUNC_3 (TYPE_3__*,char*) ;
 int FUNC_4 (int ,char*,char const*) ;
 scalar_t__ VAR_1 ;
 char* FUNC_5 (int ) ;
 int FUNC_6 (struct files_ref_store*,struct ref_lock*,char const*,char const*,char const*) ;

__attribute__((used)) static int FUNC_7(struct files_ref_store *VAR_2,
    struct ref_lock *VAR_3, const char *VAR_4,
    const char *VAR_5, const char *VAR_6)
{
 if (VAR_1 && !FUNC_1(VAR_3, VAR_5)) {
  FUNC_6(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);
  return 0;
 }

 if (!FUNC_3(&VAR_3->lk, "w"))
  return FUNC_2("unable to fdopen %s: %s",
        VAR_3->lk.tempfile->filename.buf, FUNC_5(VAR_0));

 FUNC_6(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);


 FUNC_4(VAR_3->lk.tempfile->fp, "ref: %s\n", VAR_5);
 if (FUNC_0(VAR_3) < 0)
  return FUNC_2("unable to write symref for %s: %s", VAR_4,
        FUNC_5(VAR_0));
 return 0;
}
