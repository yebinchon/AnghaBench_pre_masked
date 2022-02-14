
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ref_format {scalar_t__ format; } ;
struct option {int dummy; } ;
struct object_id {int dummy; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (char*) ;
 struct option const FUNC_1 (int ,char*,unsigned int*,int ,int ) ;
 struct option const FUNC_2 () ;
 struct option const FUNC_3 (int ,char*,scalar_t__*,int ,int ) ;
 struct option const FUNC_4 (int*,int ) ;
 int VAR_3 ;
 struct ref_format VAR_4 ;
 int FUNC_5 (char*,char const*) ;
 scalar_t__ FUNC_6 (char const*,struct object_id*) ;
 int FUNC_7 (int ,int *) ;
 int VAR_5 ;
 scalar_t__ FUNC_8 (struct object_id*,char const*,unsigned int) ;
 int FUNC_9 (int,char const**,char const*,struct option const*,int ,int ) ;
 int FUNC_10 (char const*,struct object_id*,struct ref_format*) ;
 int FUNC_11 (int ,struct option const*) ;
 scalar_t__ FUNC_12 (struct ref_format*) ;
 int VAR_6 ;

int FUNC_13(int VAR_7, const char **VAR_8, const char *VAR_9)
{
 int VAR_10 = 1, VAR_11 = 0, VAR_12 = 0;
 unsigned VAR_13 = 0;
 struct ref_format VAR_14 = VAR_4;
 const struct option VAR_15[] = {
  FUNC_4(&VAR_11, FUNC_0("print tag contents")),
  FUNC_1(0, "raw", &VAR_13, FUNC_0("print raw gpg status output"), VAR_1),
  FUNC_3(0, "format", &VAR_14.format, FUNC_0("format"), FUNC_0("format to use for the output")),
  FUNC_2()
 };

 FUNC_7(VAR_5, ((void*)0));

 VAR_7 = FUNC_9(VAR_7, VAR_8, VAR_9, VAR_15,
        VAR_6, VAR_3);
 if (VAR_7 <= VAR_10)
  FUNC_11(VAR_6, VAR_15);

 if (VAR_11)
  VAR_13 |= VAR_2;

 if (VAR_14.format) {
  if (FUNC_12(&VAR_14))
   FUNC_11(VAR_6,
        VAR_15);
  VAR_13 |= VAR_0;
 }

 while (VAR_10 < VAR_7) {
  struct object_id VAR_16;
  const char *VAR_17 = VAR_8[VAR_10++];

  if (FUNC_6(VAR_17, &VAR_16)) {
   VAR_12 = !!FUNC_5("tag '%s' not found.", VAR_17);
   continue;
  }

  if (FUNC_8(&VAR_16, VAR_17, VAR_13)) {
   VAR_12 = 1;
   continue;
  }

  if (VAR_14.format)
   FUNC_10(VAR_17, &VAR_16, &VAR_14);
 }
 return VAR_12;
}
