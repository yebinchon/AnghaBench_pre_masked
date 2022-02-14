
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_8__ {int * pfp; } ;
struct TYPE_9__ {TYPE_1__ fp; } ;
typedef TYPE_2__ loopback_ctx_t ;
struct TYPE_10__ {TYPE_2__* loopback_ctx; } ;
typedef TYPE_3__ hashcat_ctx_t ;
struct TYPE_11__ {char* pw_buf; int pw_len; int cracked; } ;
typedef TYPE_4__ hash_t ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (TYPE_3__*,int *,unsigned int) ;
 int FUNC_2 (char*,char*,int) ;

void FUNC_3 (hashcat_ctx_t *VAR_0, hash_t *VAR_1, char *VAR_2, int VAR_3)
{
  const loopback_ctx_t *VAR_4 = VAR_0->loopback_ctx;

  if (VAR_1 == ((void*)0)) return;

  char *VAR_5 = VAR_2;
  int VAR_6 = VAR_3;

  VAR_1->pw_buf = (char *) FUNC_0 (VAR_6 + 1);
  VAR_1->pw_len = VAR_6;

  if (VAR_5)
  {
    FUNC_2 (VAR_1->pw_buf, VAR_5, VAR_6);

    VAR_1->pw_buf[VAR_1->pw_len] = 0;
  }

  VAR_1->cracked = 1;



  if (VAR_4->fp.pfp != ((void*)0))
  {
    FUNC_1 (VAR_0, (u8 *) VAR_5, (unsigned int) VAR_6);
  }
}
