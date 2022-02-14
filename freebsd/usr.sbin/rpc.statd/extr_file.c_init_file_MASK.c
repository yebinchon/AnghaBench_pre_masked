
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ off_t ;
typedef int buf ;
struct TYPE_5__ {int noOfHosts; int ourState; TYPE_1__* hosts; } ;
struct TYPE_4__ {int * monList; void* notifyReqd; } ;
typedef TYPE_1__ HostInfo ;
typedef TYPE_2__ FileLayout ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 void* VAR_11 ;
 int FUNC_0 (int,char*) ;
 scalar_t__ VAR_12 ;
 int FUNC_1 (int,char*,char const*) ;
 scalar_t__ FUNC_2 (scalar_t__,long,int ) ;
 int FUNC_3 (char*,int ,int) ;
 scalar_t__ FUNC_4 (int *,int,int,int ,scalar_t__,int ) ;
 scalar_t__ FUNC_5 (char const*,int,...) ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 TYPE_2__* VAR_15 ;
 int FUNC_6 (char*) ;
 int FUNC_7 (scalar_t__,char*,int) ;

void FUNC_8(const char *VAR_16)
{
  int VAR_17 = VAR_1;
  char VAR_18[VAR_2];
  int VAR_19;


  VAR_13 = FUNC_5(VAR_16, VAR_6);
  if ((VAR_13 < 0) && (VAR_12 == VAR_0))
  {
    VAR_13 = FUNC_5(VAR_16, VAR_6 | VAR_5, 0644);
    VAR_17 = VAR_11;
  }
  if (VAR_13 < 0)
    FUNC_1(1, "unable to open status file %s", VAR_16);



  VAR_15 = (FileLayout *)
    FUNC_4(((void*)0), 0x10000000, VAR_7 | VAR_8, VAR_4, VAR_13, 0);

  if (VAR_15 == (FileLayout *) VAR_3)
    FUNC_0(1, "unable to mmap() status file");

  VAR_14 = FUNC_2(VAR_13, 0L, VAR_9);



  if (!VAR_17)
  {
    if ((VAR_14 < (off_t)VAR_2) || (VAR_14
      < (off_t)(VAR_2 + sizeof(HostInfo) * VAR_15->noOfHosts)) )
    {
      FUNC_6("status file is corrupt");
      VAR_17 = VAR_11;
    }
  }


  if (VAR_17)
  {
    FUNC_3(VAR_18, 0, sizeof(VAR_18));
    FUNC_2(VAR_13, 0L, VAR_10);
    FUNC_7(VAR_13, VAR_18, VAR_2);
    VAR_14 = VAR_2;
  }
  else
  {
    for (VAR_19 = 0; VAR_19 < VAR_15->noOfHosts; VAR_19++)
    {
      HostInfo *VAR_20 = &VAR_15->hosts[VAR_19];

      if (VAR_20->monList)
      {
 VAR_20->notifyReqd = VAR_11;
 VAR_20->monList = ((void*)0);
      }
    }

    VAR_15->ourState = (VAR_15->ourState + 2) & 0xfffffffe;
                 VAR_15->ourState++;
  }
}
