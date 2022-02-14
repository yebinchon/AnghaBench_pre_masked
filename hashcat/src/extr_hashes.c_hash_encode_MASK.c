
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef size_t u32 ;
struct TYPE_12__ {size_t const digests_offset; } ;
typedef TYPE_1__ salt_t ;
struct TYPE_13__ {int (* module_hash_encode ) (TYPE_4__ const*,char*,TYPE_1__*,char*,char*,int *,char*,int const) ;} ;
typedef TYPE_2__ module_ctx_t ;
typedef int hashinfo_t ;
struct TYPE_14__ {char* hashfile; int ** hash_info; void* hook_salts_buf; void* esalts_buf; void* digests_buf; TYPE_1__* salts_buf; } ;
typedef TYPE_3__ hashes_t ;
struct TYPE_15__ {size_t const dgst_size; size_t const esalt_size; size_t const hook_salt_size; } ;
typedef TYPE_4__ hashconfig_t ;


 int FUNC_0 (TYPE_4__ const*,char*,TYPE_1__*,char*,char*,int *,char*,int const) ;
 int FUNC_1 (char*,int const,char*,char*) ;
 int FUNC_2 (TYPE_4__ const*,char*,TYPE_1__*,char*,char*,int *,char*,int const) ;

int FUNC_3 (const hashconfig_t *VAR_0, const hashes_t *VAR_1, const module_ctx_t *VAR_2, char *VAR_3, const int VAR_4, const u32 VAR_5, const u32 VAR_6)
{
  if (VAR_2->module_hash_encode == FUNC_0)
  {
    return FUNC_1 (VAR_3, VAR_4, "%s", VAR_1->hashfile);
  }

  salt_t *VAR_7 = VAR_1->salts_buf;

  VAR_7 += VAR_5;

  const u32 VAR_8 = VAR_7->digests_offset + VAR_6;

  void *VAR_9 = VAR_1->digests_buf;
  void *VAR_10 = VAR_1->esalts_buf;
  void *VAR_11 = VAR_1->hook_salts_buf;
  hashinfo_t **VAR_12 = VAR_1->hash_info;

  char *VAR_13 = (char *) VAR_9;
  char *VAR_14 = (char *) VAR_10;
  char *VAR_15 = (char *) VAR_11;
  hashinfo_t *VAR_16 = ((void*)0);

  VAR_13 += VAR_8 * VAR_0->dgst_size;
  VAR_14 += VAR_8 * VAR_0->esalt_size;
  VAR_15 += VAR_8 * VAR_0->hook_salt_size;

  if (VAR_12) VAR_16 = VAR_12[VAR_8];

  const int VAR_17 = VAR_2->module_hash_encode
  (
    VAR_0,
    VAR_13,
    VAR_7,
    VAR_14,
    VAR_15,
    VAR_16,
    VAR_3,
    VAR_4
  );

  return VAR_17;
}
