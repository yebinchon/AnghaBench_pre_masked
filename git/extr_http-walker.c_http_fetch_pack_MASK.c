
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct walker {scalar_t__ get_verbosely; } ;
struct slot_results {scalar_t__ curl_result; } ;
struct packed_git {unsigned char* hash; } ;
struct http_pack_request {int url; TYPE_1__* slot; int * lst; } ;
struct alt_base {int packs; int base; } ;
struct TYPE_3__ {struct slot_results* results; } ;


 scalar_t__ VAR_0 ;
 char* VAR_1 ;
 int FUNC_0 (char*,...) ;
 scalar_t__ FUNC_1 (struct walker*,struct alt_base*) ;
 struct packed_git* FUNC_2 (unsigned char*,int ) ;
 int FUNC_3 (struct http_pack_request*) ;
 int FUNC_4 (int ,char*,char*) ;
 char* FUNC_5 (unsigned char*) ;
 struct http_pack_request* FUNC_6 (struct packed_git*,int ) ;
 int FUNC_7 (struct http_pack_request*) ;
 int FUNC_8 (TYPE_1__*) ;
 scalar_t__ FUNC_9 (TYPE_1__*) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_10(struct walker *VAR_3, struct alt_base *VAR_4, unsigned char *VAR_5)
{
 struct packed_git *VAR_6;
 int VAR_7;
 struct slot_results VAR_8;
 struct http_pack_request *VAR_9;

 if (FUNC_1(VAR_3, VAR_4))
  return -1;
 VAR_6 = FUNC_2(VAR_5, VAR_4->packs);
 if (!VAR_6)
  return -1;

 if (VAR_3->get_verbosely) {
  FUNC_4(VAR_2, "Getting pack %s\n",
   FUNC_5(VAR_6->hash));
  FUNC_4(VAR_2, " which contains %s\n",
   FUNC_5(VAR_5));
 }

 VAR_9 = FUNC_6(VAR_6, VAR_4->base);
 if (VAR_9 == ((void*)0))
  goto abort;
 VAR_9->lst = &VAR_4->packs;
 VAR_9->slot->results = &VAR_8;

 if (FUNC_9(VAR_9->slot)) {
  FUNC_8(VAR_9->slot);
  if (VAR_8.curl_result != VAR_0) {
   FUNC_0("Unable to get pack file %s\n%s", VAR_9->url,
         VAR_1);
   goto abort;
  }
 } else {
  FUNC_0("Unable to start request");
  goto abort;
 }

 VAR_7 = FUNC_3(VAR_9);
 FUNC_7(VAR_9);
 if (VAR_7)
  return VAR_7;

 return 0;

abort:
 return -1;
}
