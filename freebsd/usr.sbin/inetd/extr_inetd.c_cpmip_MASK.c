
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef unsigned int time_t ;
struct sockaddr_storage {int ss_family; } ;
struct sockaddr_in6 {int sin6_family; int sin6_addr; } ;
struct TYPE_6__ {scalar_t__ s_addr; } ;
struct sockaddr_in {int sin_family; TYPE_1__ sin_addr; } ;
struct sockaddr {int sa_len; } ;
struct servtab {int se_maxcpm; int se_family; int se_service; } ;
struct in_addr {int dummy; } ;
struct in6_addr {int dummy; } ;
typedef int socklen_t ;
typedef int rss ;
typedef int pname ;
struct TYPE_8__ {int ch_Family; scalar_t__ ch_LTime; TYPE_2__* ch_Times; int * ch_Service; int ch_Addr6; TYPE_1__ ch_Addr4; } ;
struct TYPE_7__ {unsigned int ct_Ticks; scalar_t__ ct_Count; } ;
typedef TYPE_2__ CTime ;
typedef TYPE_3__ CHash ;




 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 TYPE_3__* VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int *,int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (TYPE_2__*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct sockaddr*,int ,char*,int,int *,int ,int ) ;
 scalar_t__ FUNC_4 (int,struct sockaddr*,int*) ;
 scalar_t__ FUNC_5 (int ,int *) ;
 void* FUNC_6 (int ) ;
 int FUNC_7 (int ,char*,int ,char*,int) ;
 unsigned int FUNC_8 (int *) ;

__attribute__((used)) static int
FUNC_9(const struct servtab *VAR_7, int VAR_8)
{
 struct sockaddr_storage VAR_9;
 socklen_t VAR_10 = sizeof(VAR_9);
 int VAR_11 = 0;






 if (VAR_7->se_maxcpm > 0 &&
    (VAR_7->se_family == 129 || VAR_7->se_family == 128) &&
     FUNC_4(VAR_8, (struct sockaddr *)&VAR_9, &VAR_10) == 0 ) {
  time_t VAR_12 = FUNC_8(((void*)0));
  int VAR_13 = 0xABC3D20F;
  int VAR_14;
  int VAR_15 = 0;
  CHash *VAR_16 = ((void*)0);
  unsigned int VAR_17 = VAR_12 / VAR_0;
  struct sockaddr_in *VAR_18;




  VAR_18 = (struct sockaddr_in *)&VAR_9;



  {
   char *VAR_19;
   int VAR_20;

   switch (VAR_9.ss_family) {
   case 129:
    VAR_19 = (char *)&VAR_18->sin_addr;
    VAR_20 = sizeof(struct in_addr);
    break;






   default:

    return -1;
   }

   for (VAR_14 = 0; VAR_14 < VAR_20; ++VAR_14, ++VAR_19) {
    VAR_13 = (VAR_13 << 5) ^ (VAR_13 >> 23) ^ *VAR_19;
   }
   VAR_13 = (VAR_13 ^ (VAR_13 >> 16));
  }
  for (VAR_14 = 0; VAR_14 < 5; ++VAR_14) {
   CHash *VAR_21 = &VAR_2[(VAR_13 + VAR_14) & VAR_3];

   if (VAR_9.ss_family == 129 &&
       VAR_21->ch_Family == 129 &&
       VAR_18->sin_addr.s_addr == VAR_21->ch_Addr4.s_addr &&
       VAR_21->ch_Service && FUNC_5(VAR_7->se_service,
       VAR_21->ch_Service) == 0) {
    VAR_16 = VAR_21;
    break;
   }
   if (VAR_16 == ((void*)0) || VAR_21->ch_LTime == 0 ||
       VAR_21->ch_LTime < VAR_16->ch_LTime) {
    VAR_16 = VAR_21;
   }
  }
  if ((VAR_9.ss_family == 129 &&
       (VAR_16->ch_Family != 129 ||
        VAR_18->sin_addr.s_addr != VAR_16->ch_Addr4.s_addr)) ||
      VAR_16->ch_Service == ((void*)0) ||
      FUNC_5(VAR_7->se_service, VAR_16->ch_Service) != 0) {
   VAR_16->ch_Family = VAR_18->sin_family;
   VAR_16->ch_Addr4 = VAR_18->sin_addr;
   if (VAR_16->ch_Service)
    FUNC_2(VAR_16->ch_Service);
   VAR_16->ch_Service = FUNC_6(VAR_7->se_service);
   FUNC_1(VAR_16->ch_Times, sizeof(VAR_16->ch_Times));
  }
  VAR_16->ch_LTime = VAR_12;
  {
   CTime *VAR_22 = &VAR_16->ch_Times[VAR_17 % VAR_1];
   if (VAR_22->ct_Ticks != VAR_17) {
    VAR_22->ct_Ticks = VAR_17;
    VAR_22->ct_Count = 0;
   }
   ++VAR_22->ct_Count;
  }
  for (VAR_14 = 0; VAR_14 < VAR_1; ++VAR_14) {
   CTime *VAR_23 = &VAR_16->ch_Times[VAR_14];
   if (VAR_23->ct_Ticks <= VAR_17 &&
       VAR_23->ct_Ticks >= VAR_17 - VAR_1) {
    VAR_15 += VAR_23->ct_Count;
   }
  }
  if ((VAR_15 * 60) / (VAR_1 * VAR_0) > VAR_7->se_maxcpm) {
   char VAR_24[VAR_5];

   FUNC_3((struct sockaddr *)&VAR_9,
        ((struct sockaddr *)&VAR_9)->sa_len,
        VAR_24, sizeof(VAR_24), ((void*)0), 0,
        VAR_6);
   VAR_11 = -1;
   FUNC_7(VAR_4,
       "%s from %s exceeded counts/min (limit %d/min)",
       VAR_7->se_service, VAR_24,
       VAR_7->se_maxcpm);
  }
 }
 return(VAR_11);
}
