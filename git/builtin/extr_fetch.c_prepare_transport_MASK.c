
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct transport {scalar_t__ smart_options; int family; } ;
struct remote {int dummy; } ;
struct TYPE_7__ {scalar_t__ nr; } ;
struct TYPE_6__ {scalar_t__ choice; } ;
struct TYPE_5__ {scalar_t__ nr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (scalar_t__) ;
 TYPE_4__ VAR_9 ;
 scalar_t__ VAR_10 ;
 char* VAR_11 ;
 char* VAR_12 ;
 char* FUNC_1 (TYPE_2__*) ;
 int VAR_13 ;
 TYPE_2__ VAR_14 ;
 scalar_t__ VAR_15 ;
 TYPE_1__ VAR_16 ;
 int VAR_17 ;
 int FUNC_2 (struct transport*,int ,char const*) ;
 struct transport* FUNC_3 (struct remote*,int *) ;
 int FUNC_4 (struct transport*,int ,int ) ;
 scalar_t__ VAR_18 ;
 char* VAR_19 ;
 int VAR_20 ;
 int FUNC_5 (char*) ;

__attribute__((used)) static struct transport *FUNC_6(struct remote *VAR_21, int VAR_22)
{
 struct transport *VAR_23;

 VAR_23 = FUNC_3(VAR_21, ((void*)0));
 FUNC_4(VAR_23, VAR_20, VAR_17);
 VAR_23->family = VAR_13;
 if (VAR_19)
  FUNC_2(VAR_23, VAR_8, VAR_19);
 if (VAR_15)
  FUNC_2(VAR_23, VAR_5, "yes");
 if (VAR_12)
  FUNC_2(VAR_23, VAR_3, VAR_12);
 if (VAR_22 && VAR_11)
  FUNC_2(VAR_23, VAR_2, VAR_11);
 if (VAR_22 && VAR_9.nr)
  FUNC_2(VAR_23, VAR_0,
      (const char *)&VAR_9);
 if (VAR_10)
  FUNC_2(VAR_23, VAR_1, "yes");
 if (VAR_18)
  FUNC_2(VAR_23, VAR_7, "yes");
 if (VAR_14.choice) {
  const char *VAR_24 =
   FUNC_1(&VAR_14);
  FUNC_2(VAR_23, VAR_6, VAR_24);
  FUNC_2(VAR_23, VAR_4, "1");
 }
 if (VAR_16.nr) {
  if (VAR_23->smart_options)
   FUNC_0(VAR_23->smart_options);
  else
   FUNC_5("Ignoring --negotiation-tip because the protocol does not support it.");
 }
 return VAR_23;
}
