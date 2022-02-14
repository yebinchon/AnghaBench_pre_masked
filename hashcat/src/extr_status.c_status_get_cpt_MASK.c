
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ time_t ;
struct TYPE_10__ {TYPE_2__* cpt_ctx; } ;
typedef TYPE_1__ hashcat_ctx_t ;
struct TYPE_11__ {scalar_t__ const cpt_start; } ;
typedef TYPE_2__ cpt_ctx_t ;


 int FUNC_0 (char**,char*,int const,int const,int const,...) ;
 int FUNC_1 (TYPE_1__ const*) ;
 int FUNC_2 (TYPE_1__ const*) ;
 int FUNC_3 (TYPE_1__ const*) ;
 int FUNC_4 (TYPE_1__ const*) ;
 int FUNC_5 (TYPE_1__ const*) ;
 int FUNC_6 (TYPE_1__ const*) ;
 scalar_t__ FUNC_7 (int *) ;

char *FUNC_8 (const hashcat_ctx_t *VAR_0)
{
  const cpt_ctx_t *VAR_1 = VAR_0->cpt_ctx;

  const time_t VAR_2 = FUNC_7 (((void*)0));

  char *VAR_3;

  const int VAR_4 = FUNC_6 (VAR_0);
  const int VAR_5 = FUNC_5 (VAR_0);
  const int VAR_6 = FUNC_4 (VAR_0);

  const int VAR_7 = FUNC_3 (VAR_0);
  const int VAR_8 = FUNC_2 (VAR_0);
  const int VAR_9 = FUNC_1 (VAR_0);

  if ((VAR_1->cpt_start + 86400) < VAR_2)
  {
    FUNC_0 (&VAR_3, "CUR:%d,%d,%d AVG:%d,%d,%d (Min,Hour,Day)",
      VAR_4,
      VAR_5,
      VAR_6,
      VAR_7,
      VAR_8,
      VAR_9);
  }
  else if ((VAR_1->cpt_start + 3600) < VAR_2)
  {
    FUNC_0 (&VAR_3, "CUR:%d,%d,N/A AVG:%d,%d,%d (Min,Hour,Day)",
      VAR_4,
      VAR_5,
      VAR_7,
      VAR_8,
      VAR_9);
  }
  else if ((VAR_1->cpt_start + 60) < VAR_2)
  {
    FUNC_0 (&VAR_3, "CUR:%d,N/A,N/A AVG:%d,%d,%d (Min,Hour,Day)",
      VAR_4,
      VAR_7,
      VAR_8,
      VAR_9);
  }
  else
  {
    FUNC_0 (&VAR_3, "CUR:N/A,N/A,N/A AVG:%d,%d,%d (Min,Hour,Day)",
      VAR_7,
      VAR_8,
      VAR_9);
  }

  return VAR_3;
}
