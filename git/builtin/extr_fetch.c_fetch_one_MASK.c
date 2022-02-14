
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct refspec {int dummy; } ;
struct remote {scalar_t__ prune; scalar_t__ prune_tags; struct refspec fetch; } ;
struct TYPE_7__ {scalar_t__ nr; } ;
struct TYPE_6__ {TYPE_2__* server_options; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 struct refspec VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 char const* VAR_5 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*,struct refspec*) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_4 (char*) ;
 TYPE_1__* VAR_8 ;
 TYPE_1__* FUNC_5 (struct remote*,int) ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_6 (struct refspec*,char const*) ;
 int FUNC_7 (struct refspec*) ;
 int FUNC_8 (struct remote*,int ) ;
 TYPE_2__ VAR_11 ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (char const*,char*) ;
 int FUNC_13 (TYPE_1__*) ;
 int VAR_12 ;
 int VAR_13 ;
 char* FUNC_14 (char*,char const*,char const*) ;

__attribute__((used)) static int FUNC_15(struct remote *VAR_14, int VAR_15, const char **VAR_16, int VAR_17)
{
 struct refspec VAR_18 = VAR_2;
 int VAR_19;
 int VAR_20;
 int VAR_21;
 int VAR_22 = FUNC_8(VAR_14, 0);

 if (!VAR_14)
  FUNC_2(FUNC_0("No remote repository specified.  Please, specify either a URL or a\n"
      "remote name from which new revisions should be fetched."));

 VAR_8 = FUNC_5(VAR_14, 1);

 if (VAR_9 < 0) {

  if (0 <= VAR_14->prune)
   VAR_9 = VAR_14->prune;
  else if (0 <= VAR_6)
   VAR_9 = VAR_6;
  else
   VAR_9 = VAR_0;
 }

 if (VAR_10 < 0) {

  if (0 <= VAR_14->prune_tags)
   VAR_10 = VAR_14->prune_tags;
  else if (0 <= VAR_7)
   VAR_10 = VAR_7;
  else
   VAR_10 = VAR_1;
 }

 VAR_21 = VAR_17 && VAR_10;
 if (VAR_21 && VAR_22)
  FUNC_6(&VAR_14->fetch, VAR_5);

 if (VAR_21 && (VAR_15 || !VAR_22))
  FUNC_6(&VAR_18, VAR_5);

 for (VAR_19 = 0; VAR_19 < VAR_15; VAR_19++) {
  if (!FUNC_12(VAR_16[VAR_19], "tag")) {
   char *VAR_23;
   VAR_19++;
   if (VAR_19 >= VAR_15)
    FUNC_2(FUNC_0("You need to specify a tag name."));

   VAR_23 = FUNC_14("refs/tags/%s:refs/tags/%s",
          VAR_16[VAR_19], VAR_16[VAR_19]);
   FUNC_6(&VAR_18, VAR_23);
   FUNC_4(VAR_23);
  } else {
   FUNC_6(&VAR_18, VAR_16[VAR_19]);
  }
 }

 if (VAR_11.nr)
  VAR_8->server_options = &VAR_11;

 FUNC_11(VAR_13);
 FUNC_1(VAR_12);
 FUNC_10(VAR_3, VAR_4);
 VAR_20 = FUNC_3(VAR_8, &VAR_18);
 FUNC_9(VAR_3);
 FUNC_7(&VAR_18);
 FUNC_13(VAR_8);
 VAR_8 = ((void*)0);
 return VAR_20;
}
