
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ref_format {scalar_t__ format; } ;
struct object_id {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct object_id const*,char const*,int) ;
 int FUNC_1 (char const*,struct object_id const*,struct ref_format const*) ;

__attribute__((used)) static int FUNC_2(const char *VAR_2, const char *VAR_3,
        const struct object_id *VAR_4, const void *VAR_5)
{
 int VAR_6;
 const struct ref_format *VAR_7 = VAR_5;
 VAR_6 = VAR_1;

 if (VAR_7->format)
  VAR_6 = VAR_0;

 if (FUNC_0(VAR_4, VAR_2, VAR_6))
  return -1;

 if (VAR_7->format)
  FUNC_1(VAR_2, VAR_4, VAR_7);

 return 0;
}
