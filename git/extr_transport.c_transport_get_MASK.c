
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct transport {char const* url; TYPE_1__* smart_options; int * vtable; struct git_transport_data* data; struct remote* remote; scalar_t__ got_remote_refs; int progress; } ;
struct remote {char* foreign_vcs; char** url; char* uploadpack; char* receivepack; } ;
struct TYPE_2__ {int thin; char* uploadpack; char* receivepack; } ;
struct git_transport_data {scalar_t__ got_remote_heads; int * conn; TYPE_1__ options; } ;
struct bundle_transport_data {scalar_t__ got_remote_heads; int * conn; TYPE_1__ options; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char const*) ;
 scalar_t__ FUNC_4 (char const*,int) ;
 scalar_t__ FUNC_5 (char const*) ;
 int FUNC_6 (char const*) ;
 scalar_t__ FUNC_7 (int,char const) ;
 int FUNC_8 (int) ;
 scalar_t__ FUNC_9 (char const*,char*) ;
 int FUNC_10 (char*) ;
 int FUNC_11 (struct transport*,char const*) ;
 scalar_t__ FUNC_12 (char const*) ;
 void* FUNC_13 (int,int) ;
 char* FUNC_14 (char const*,int) ;
 char* FUNC_15 (char const*,int) ;

struct transport *FUNC_16(struct remote *VAR_2, const char *VAR_3)
{
 const char *VAR_4;
 struct transport *VAR_5 = FUNC_13(1, sizeof(*VAR_5));

 VAR_5->progress = FUNC_8(2);

 if (!VAR_2)
  FUNC_0("No remote provided to transport_get()");

 VAR_5->got_remote_refs = 0;
 VAR_5->remote = VAR_2;
 VAR_4 = VAR_2->foreign_vcs;

 if (!VAR_3 && VAR_2->url)
  VAR_3 = VAR_2->url[0];
 VAR_5->url = VAR_3;


 if (VAR_3) {
  const char *VAR_6 = VAR_3;

  while (FUNC_7(VAR_6 == VAR_3, *VAR_6))
   VAR_6++;
  if (FUNC_9(VAR_6, "::"))
   VAR_4 = FUNC_15(VAR_3, VAR_6 - VAR_3);
 }

 if (VAR_4) {
  FUNC_11(VAR_5, VAR_4);
 } else if (FUNC_9(VAR_3, "rsync:")) {
  FUNC_2(FUNC_1("git-over-rsync is no longer supported"));
 } else if (FUNC_12(VAR_3) && FUNC_5(VAR_3) && FUNC_4(VAR_3, 1)) {
  struct bundle_transport_data *VAR_7 = FUNC_13(1, sizeof(*VAR_7));
  FUNC_10("file");
  VAR_5->data = VAR_7;
  VAR_5->vtable = &VAR_1;
  VAR_5->smart_options = ((void*)0);
 } else if (!FUNC_6(VAR_3)
  || FUNC_9(VAR_3, "file://")
  || FUNC_9(VAR_3, "git://")
  || FUNC_9(VAR_3, "ssh://")
  || FUNC_9(VAR_3, "git+ssh://")
  || FUNC_9(VAR_3, "ssh+git://")
  ) {




  struct git_transport_data *VAR_8 = FUNC_13(1, sizeof(*VAR_8));
  VAR_5->data = VAR_8;
  VAR_5->vtable = &VAR_0;
  VAR_5->smart_options = &(VAR_8->options);

  VAR_8->conn = ((void*)0);
  VAR_8->got_remote_heads = 0;
 } else {

  int VAR_9 = FUNC_3(VAR_3);
  char *VAR_10 = FUNC_14(VAR_3, VAR_9);
  FUNC_11(VAR_5, VAR_10);
 }

 if (VAR_5->smart_options) {
  VAR_5->smart_options->thin = 1;
  VAR_5->smart_options->uploadpack = "git-upload-pack";
  if (VAR_2->uploadpack)
   VAR_5->smart_options->uploadpack = VAR_2->uploadpack;
  VAR_5->smart_options->receivepack = "git-receive-pack";
  if (VAR_2->receivepack)
   VAR_5->smart_options->receivepack = VAR_2->receivepack;
 }

 return VAR_5;
}
