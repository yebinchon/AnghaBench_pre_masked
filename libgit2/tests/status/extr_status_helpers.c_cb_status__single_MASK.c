
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int count; unsigned int status; scalar_t__ debug; } ;
typedef TYPE_1__ status_entry_single ;


 int FUNC_0 (int ,char*,int,char const*,unsigned int) ;
 int VAR_0 ;

int FUNC_1(const char *VAR_1, unsigned int VAR_2, void *VAR_3)
{
 status_entry_single *VAR_4 = (status_entry_single *)VAR_3;

 if (VAR_4->debug)
  FUNC_0(VAR_0, "%02d: %s (%04x)\n", VAR_4->count, VAR_1, VAR_2);

 VAR_4->count++;
 VAR_4->status = VAR_2;

 return 0;
}
