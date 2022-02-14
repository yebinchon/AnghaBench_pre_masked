
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int conflicts; int ignores; int wt_mods; int wt_dels; int wt_adds; int index_mods; int index_dels; int index_adds; } ;
typedef TYPE_1__ index_status_counts ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 int FUNC_0 (char const*) ;

__attribute__((used)) static int FUNC_1(
 const char *VAR_10, unsigned int VAR_11, void *VAR_12)
{
 index_status_counts *VAR_13 = VAR_12;



 FUNC_0(VAR_10);

 if (VAR_11 & VAR_4)
  VAR_13->index_adds++;
 if (VAR_11 & VAR_3)
  VAR_13->index_mods++;
 if (VAR_11 & VAR_2)
  VAR_13->index_dels++;
 if (VAR_11 & VAR_5)
  VAR_13->index_mods++;

 if (VAR_11 & VAR_8)
  VAR_13->wt_adds++;
 if (VAR_11 & VAR_7)
  VAR_13->wt_mods++;
 if (VAR_11 & VAR_6)
  VAR_13->wt_dels++;
 if (VAR_11 & VAR_9)
  VAR_13->wt_mods++;

 if (VAR_11 & VAR_1)
  VAR_13->ignores++;
 if (VAR_11 & VAR_0)
  VAR_13->conflicts++;

 return 0;
}
