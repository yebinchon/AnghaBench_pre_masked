
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct addrinfo {scalar_t__ ai_family; scalar_t__ ai_addrlen; int ai_addr; struct addrinfo* ai_next; } ;
typedef int off_t ;
struct TYPE_6__ {int noOfHosts; TYPE_1__* hosts; } ;
struct TYPE_5__ {char* hostname; int notifyReqd; int monList; } ;
typedef TYPE_1__ HostInfo ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct addrinfo*) ;
 scalar_t__ FUNC_1 (char*,int *,int *,struct addrinfo**) ;
 int FUNC_2 (int ,int,int ) ;
 int FUNC_3 (int ,int ,scalar_t__) ;
 int FUNC_4 (TYPE_1__*,int ,int) ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_2__* VAR_5 ;
 int FUNC_5 (char*,char*,int ) ;
 int FUNC_6 (char*,char*,int ) ;
 int FUNC_7 (int ,char*) ;
 scalar_t__ FUNC_8 (int ,char*,int) ;

HostInfo *FUNC_9(char *VAR_6, int VAR_7)
{
  HostInfo *VAR_8;
  HostInfo *VAR_9 = ((void*)0);
  HostInfo *VAR_10 = ((void*)0);
  struct addrinfo *VAR_11, *VAR_12;
  int VAR_13;

  VAR_12 = ((void*)0);
  if (FUNC_1(VAR_6, ((void*)0), ((void*)0), &VAR_11) != 0)
    VAR_11 = ((void*)0);
  for (VAR_13 = 0, VAR_8 = VAR_5->hosts; VAR_13 < VAR_5->noOfHosts; VAR_13++, VAR_8++)
  {
    if (!FUNC_5(VAR_6, VAR_8->hostname, VAR_2))
    {
      VAR_10 = VAR_8;
      break;
    }
    if (VAR_8->hostname[0] != '\0' &&
 FUNC_1(VAR_8->hostname, ((void*)0), ((void*)0), &VAR_12) != 0)
      VAR_12 = ((void*)0);
    if (VAR_11 && VAR_12)
    {
       struct addrinfo *VAR_14, *VAR_15;
       for (VAR_14 = VAR_11; !VAR_10 && VAR_14; VAR_14 = VAR_14->ai_next)
       {
  for (VAR_15 = VAR_12; !VAR_10 && VAR_15; VAR_15 = VAR_15->ai_next)
  {
    if (VAR_14->ai_family == VAR_15->ai_family
        && VAR_14->ai_addrlen == VAR_15->ai_addrlen
        && !FUNC_3(VAR_14->ai_addr, VAR_15->ai_addr, VAR_14->ai_addrlen))
    {
      VAR_10 = VAR_8;
      break;
    }
  }
       }
       if (VAR_10)
  break;
    }
    if (VAR_12) {
      FUNC_0(VAR_12);
      VAR_12 = ((void*)0);
    }
    if (!VAR_9 && !VAR_8->monList && !VAR_8->notifyReqd)
      VAR_9 = VAR_8;
  }
  if (VAR_11)
    FUNC_0(VAR_11);


  if (VAR_10 || !VAR_7) return (VAR_10);



  if (!VAR_9)
  {
    off_t VAR_16;
    VAR_9 = &VAR_5->hosts[VAR_5->noOfHosts];
    VAR_16 = ((char*)VAR_9 - (char*)VAR_5) + sizeof(HostInfo);
    if (VAR_16 > VAR_4)
    {

      if (FUNC_2(VAR_3, VAR_16 - 1, VAR_1) == -1 ||
          FUNC_8(VAR_3, "\0", 1) < 0)
      {
 FUNC_7(VAR_0, "Unable to extend status file");
 return (((void*)0));
      }
      VAR_4 = VAR_16;
    }
    VAR_5->noOfHosts++;
  }




  FUNC_4(VAR_9, 0, sizeof(HostInfo));
  FUNC_6(VAR_9->hostname, VAR_6, VAR_2);
  return (VAR_9);
}
