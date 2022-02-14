
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ng_tag_hookstat {char* thisHook; int tag_len; } ;
struct ng_tag_hookout {char* thisHook; int tag_len; } ;
struct ng_tag_hookin {char* thisHook; int tag_len; } ;
struct TYPE_3__ {int typecookie; int const cmd; int arglen; } ;
struct ng_mesg {char* data; TYPE_1__ header; } ;
typedef int node_p ;
typedef int item_p ;
typedef int * hook_p ;
typedef TYPE_2__* hinfo_p ;
struct TYPE_4__ {struct ng_tag_hookstat stats; struct ng_tag_hookstat* out; struct ng_tag_hookstat* in; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (int ,struct ng_mesg*) ;
 int FUNC_2 (struct ng_mesg*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct ng_mesg*,struct ng_mesg*,int,int ) ;
 int FUNC_5 (int,int ,int ,struct ng_mesg*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct ng_tag_hookstat*,char*,int) ;
 int FUNC_9 (struct ng_tag_hookstat*,int) ;
 int * FUNC_10 (int ,char*) ;
 int FUNC_11 (int *,struct ng_tag_hookstat* const) ;
 int FUNC_12 (int *,struct ng_tag_hookstat* const) ;

__attribute__((used)) static int
FUNC_13(node_p VAR_3, item_p VAR_4, hook_p VAR_5)
{
 struct ng_mesg *VAR_6;
 struct ng_mesg *VAR_7 = ((void*)0);
 int VAR_8 = 0;

 FUNC_1(VAR_4, VAR_6);
 switch (VAR_6->header.typecookie) {
 case 134:
  switch (VAR_6->header.cmd) {
  case 129:
      {
   struct ng_tag_hookin *const
       VAR_9 = (struct ng_tag_hookin *)VAR_6->data;
   hook_p VAR_10;


   if (VAR_6->header.arglen < sizeof(*VAR_9)
       || VAR_6->header.arglen !=
       FUNC_6(VAR_9->tag_len))
    FUNC_0(VAR_0);


   if ((VAR_10 = FUNC_10(VAR_3, VAR_9->thisHook)) == ((void*)0))
    FUNC_0(VAR_1);


   if ((VAR_8 = FUNC_11(VAR_10, VAR_9)) != 0)
    FUNC_0(VAR_8);
   break;
      }

  case 128:
      {
   struct ng_tag_hookout *const
       VAR_11 = (struct ng_tag_hookout *)VAR_6->data;
   hook_p VAR_12;


   if (VAR_6->header.arglen < sizeof(*VAR_11)
       || VAR_6->header.arglen !=
       FUNC_7(VAR_11->tag_len))
    FUNC_0(VAR_0);


   if ((VAR_12 = FUNC_10(VAR_3, VAR_11->thisHook)) == ((void*)0))
    FUNC_0(VAR_1);


   if ((VAR_8 = FUNC_12(VAR_12, VAR_11)) != 0)
    FUNC_0(VAR_8);
   break;
      }

  case 132:
      {
   struct ng_tag_hookin *VAR_13;
   hook_p VAR_14;


   if (VAR_6->header.arglen == 0)
    FUNC_0(VAR_0);
   VAR_6->data[VAR_6->header.arglen - 1] = '\0';


   if ((VAR_14 = FUNC_10(VAR_3, VAR_6->data)) == ((void*)0))
    FUNC_0(VAR_1);


   VAR_13 = ((hinfo_p)FUNC_3(VAR_14))->in;
   FUNC_4(VAR_7, VAR_6,
       FUNC_6(VAR_13->tag_len), VAR_2);

   FUNC_8(VAR_13, VAR_7->data,
      FUNC_6(VAR_13->tag_len));
   break;
      }

  case 131:
      {
   struct ng_tag_hookout *VAR_15;
   hook_p VAR_16;


   if (VAR_6->header.arglen == 0)
    FUNC_0(VAR_0);
   VAR_6->data[VAR_6->header.arglen - 1] = '\0';


   if ((VAR_16 = FUNC_10(VAR_3, VAR_6->data)) == ((void*)0))
    FUNC_0(VAR_1);


   VAR_15 = ((hinfo_p)FUNC_3(VAR_16))->out;
   FUNC_4(VAR_7, VAR_6,
       FUNC_7(VAR_15->tag_len), VAR_2);

   FUNC_8(VAR_15, VAR_7->data,
      FUNC_7(VAR_15->tag_len));
   break;
      }
  default:
   VAR_8 = VAR_0;
   break;
  }
  break;
 default:
  VAR_8 = VAR_0;
  break;
 }
done:
 FUNC_5(VAR_8, VAR_3, VAR_4, VAR_7);
 FUNC_2(VAR_6);
 return (VAR_8);
}
