
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int ssize_t ;
struct TYPE_4__ {void* m_resident; void* m_size; } ;
struct TYPE_5__ {void* m_dt; void* m_drs; void* m_lrs; void* m_trs; void* m_share; TYPE_1__ super; } ;
typedef TYPE_2__ LinuxProcess ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (char*,int ) ;
 void* FUNC_2 (char*,char**,int) ;
 int FUNC_3 (char*,int ,char*,char const*,char const*) ;
 int FUNC_4 (int,char*,int ) ;

__attribute__((used)) static bool FUNC_5(LinuxProcess* VAR_4, const char* VAR_5, const char* VAR_6) {
   char VAR_7[VAR_0+1];
   FUNC_3(VAR_7, VAR_0, "%s/%s/statm", VAR_5, VAR_6);
   int VAR_8 = FUNC_1(VAR_7, VAR_1);
   if (VAR_8 == -1)
      return 0;
   char VAR_9[VAR_2 + 1];
   ssize_t VAR_10 = FUNC_4(VAR_8, VAR_9, VAR_2);
   FUNC_0(VAR_8);
   if (VAR_10 < 1) return 0;

   char *VAR_11 = VAR_9;
   VAR_3 = 0;
   VAR_4->super.m_size = FUNC_2(VAR_11, &VAR_11, 10); if (*VAR_11 == ' ') VAR_11++;
   VAR_4->super.m_resident = FUNC_2(VAR_11, &VAR_11, 10); if (*VAR_11 == ' ') VAR_11++;
   VAR_4->m_share = FUNC_2(VAR_11, &VAR_11, 10); if (*VAR_11 == ' ') VAR_11++;
   VAR_4->m_trs = FUNC_2(VAR_11, &VAR_11, 10); if (*VAR_11 == ' ') VAR_11++;
   VAR_4->m_lrs = FUNC_2(VAR_11, &VAR_11, 10); if (*VAR_11 == ' ') VAR_11++;
   VAR_4->m_drs = FUNC_2(VAR_11, &VAR_11, 10); if (*VAR_11 == ' ') VAR_11++;
   VAR_4->m_dt = FUNC_2(VAR_11, &VAR_11, 10);
   return (VAR_3 == 0);
}
