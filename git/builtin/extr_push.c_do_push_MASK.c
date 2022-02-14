
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct transport {struct string_list const* push_options; } ;
struct string_list {scalar_t__ nr; } ;
struct refspec {scalar_t__ nr; } ;
struct remote {struct refspec push; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct remote*,char const***) ;
 scalar_t__ FUNC_1 (struct transport*,struct refspec*,int) ;
 struct refspec VAR_3 ;
 int FUNC_2 (struct remote*) ;
 struct transport* FUNC_3 (struct remote*,char const*) ;

__attribute__((used)) static int FUNC_4(const char *VAR_4, int VAR_5,
     const struct string_list *VAR_6,
     struct remote *VAR_7)
{
 int VAR_8, VAR_9;
 const char **VAR_10;
 int VAR_11;
 struct refspec *VAR_12 = &VAR_3;

 if (VAR_6->nr)
  VAR_5 |= VAR_2;

 if (!VAR_12->nr && !(VAR_5 & VAR_0)) {
  if (VAR_7->push.nr) {
   VAR_12 = &VAR_7->push;
  } else if (!(VAR_5 & VAR_1))
   FUNC_2(VAR_7);
 }
 VAR_9 = 0;
 VAR_11 = FUNC_0(VAR_7, &VAR_10);
 if (VAR_11) {
  for (VAR_8 = 0; VAR_8 < VAR_11; VAR_8++) {
   struct transport *VAR_13 =
    FUNC_3(VAR_7, VAR_10[VAR_8]);
   if (VAR_5 & VAR_2)
    VAR_13->push_options = VAR_6;
   if (FUNC_1(VAR_13, VAR_12, VAR_5))
    VAR_9++;
  }
 } else {
  struct transport *VAR_14 =
   FUNC_3(VAR_7, ((void*)0));
  if (VAR_5 & VAR_2)
   VAR_14->push_options = VAR_6;
  if (FUNC_1(VAR_14, VAR_12, VAR_5))
   VAR_9++;
 }
 return !!VAR_9;
}
