
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef void* uint32_t ;
struct in_addr {void* s_addr; } ;
struct TYPE_4__ {int sgroup; int egroup; struct in_addr end; struct in_addr start; } ;
struct TYPE_3__ {void* end; void* start; } ;
struct ip_range {TYPE_2__ ipv6; TYPE_1__ ipv4; void* port1; void* port0; int name; } ;
typedef int start ;
typedef int end ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (struct in_addr*,struct in_addr*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (char*,void**,void**) ;
 int FUNC_3 (char*,struct in_addr*,void**,int*) ;
 int FUNC_4 (char*) ;
 void* FUNC_5 (void*) ;
 int FUNC_6 (int,struct in_addr*,char*,int) ;
 char* FUNC_7 (char*,char) ;
 char* FUNC_8 (int ) ;
 int FUNC_9 (int) ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static int
FUNC_10(struct ip_range *VAR_5, int VAR_6)
{
 char *VAR_7, *VAR_8, VAR_9[VAR_2];
 char VAR_10[VAR_2];
 struct in_addr VAR_11;
 uint32_t VAR_12;

 if (VAR_4)
  FUNC_0("extract IP range from %s", VAR_5->name);

 VAR_7 = FUNC_8(VAR_5->name);
 if (VAR_7 == ((void*)0)) {
  FUNC_0("strdup failed");
  FUNC_9(-1);
 }

 VAR_8 = FUNC_7(VAR_7, '-');
 if (VAR_8 != ((void*)0))
  *VAR_8++ = '\0';
 VAR_5->port0 = 1234;
 if (VAR_6 == VAR_1) {
  VAR_5->ipv6.sgroup = 7;
  FUNC_3(VAR_7, &VAR_5->ipv6.start, &VAR_5->port0,
      &VAR_5->ipv6.sgroup);
 } else
  FUNC_2(VAR_7, &VAR_5->ipv4.start, &VAR_5->port0);

 VAR_5->port1 = VAR_5->port0;
 if (VAR_6 == VAR_1) {
  if (VAR_8 != ((void*)0)) {
   VAR_5->ipv6.egroup = VAR_5->ipv6.sgroup;
   FUNC_3(VAR_8, &VAR_5->ipv6.end, &VAR_5->port1,
       &VAR_5->ipv6.egroup);
  } else {
   VAR_5->ipv6.end = VAR_5->ipv6.start;
   VAR_5->ipv6.egroup = VAR_5->ipv6.sgroup;
  }
 } else {
  if (VAR_8 != ((void*)0)) {
   FUNC_2(VAR_8, &VAR_5->ipv4.end, &VAR_5->port1);
   if (VAR_5->ipv4.start > VAR_5->ipv4.end) {
    VAR_12 = VAR_5->ipv4.end;
    VAR_5->ipv4.end = VAR_5->ipv4.start;
    VAR_5->ipv4.start = VAR_12;
   }
  } else
   VAR_5->ipv4.end = VAR_5->ipv4.start;
 }

 if (VAR_5->port0 > VAR_5->port1) {
  VAR_12 = VAR_5->port0;
  VAR_5->port0 = VAR_5->port1;
  VAR_5->port1 = VAR_12;
 }
 if (VAR_6 == VAR_0) {
  VAR_11.s_addr = FUNC_5(VAR_5->ipv4.start);
  FUNC_6(VAR_6, &VAR_11, VAR_9, sizeof(VAR_9));
  VAR_11.s_addr = FUNC_5(VAR_5->ipv4.end);
  FUNC_6(VAR_6, &VAR_11, VAR_10, sizeof(VAR_10));
 } else {
  FUNC_6(VAR_6, &VAR_5->ipv6.start, VAR_9, sizeof(VAR_9));
  FUNC_6(VAR_6, &VAR_5->ipv6.end, VAR_10, sizeof(VAR_10));
 }
 if (VAR_6 == VAR_0)
  FUNC_0("range is %s:%d to %s:%d", VAR_9, VAR_5->port0, VAR_10, VAR_5->port1);
 else
  FUNC_0("range is %d@[%s]:%d to %d@[%s]:%d", VAR_5->ipv6.sgroup,
      VAR_9, VAR_5->port0, VAR_5->ipv6.egroup, VAR_10, VAR_5->port1);

 FUNC_4(VAR_7);
 if (VAR_5->port0 != VAR_5->port1 ||
     (VAR_6 == VAR_0 && VAR_5->ipv4.start != VAR_5->ipv4.end) ||
     (VAR_6 == VAR_1 &&
  !FUNC_1(&VAR_5->ipv6.start, &VAR_5->ipv6.end)))
  return (VAR_3);
 return (0);
}
