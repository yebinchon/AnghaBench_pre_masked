
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int logfile_ctx_t ;
struct TYPE_4__ {int salts_done; int salts_cnt; int digests_done; int digests_cnt; int hashes_cnt; int hashlist_format; int hashlist_mode; int hashfile; } ;
typedef TYPE_1__ hashes_t ;
struct TYPE_5__ {int * logfile_ctx; TYPE_1__* hashes; } ;
typedef TYPE_2__ hashcat_ctx_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

void FUNC_2 (hashcat_ctx_t *VAR_0)
{
  hashes_t *VAR_1 = VAR_0->hashes;
  logfile_ctx_t *VAR_2 = VAR_0->logfile_ctx;

  FUNC_0 (VAR_1->hashfile);
  FUNC_1 (VAR_1->hashlist_mode);
  FUNC_1 (VAR_1->hashlist_format);
  FUNC_1 (VAR_1->hashes_cnt);
  FUNC_1 (VAR_1->digests_cnt);
  FUNC_1 (VAR_1->digests_done);
  FUNC_1 (VAR_1->salts_cnt);
  FUNC_1 (VAR_1->salts_done);
}
