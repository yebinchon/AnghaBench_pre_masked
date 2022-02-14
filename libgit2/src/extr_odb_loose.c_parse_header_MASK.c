
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_3__ {size_t size; int type; } ;
typedef TYPE_1__ obj_hdr ;
typedef scalar_t__ int64_t ;


 scalar_t__ FUNC_0 (size_t*,size_t,int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (scalar_t__*,char const*,size_t,int *,int) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (char const*,size_t) ;

__attribute__((used)) static int FUNC_4(
 obj_hdr *VAR_2,
        size_t *VAR_3,
 const unsigned char *VAR_4,
 size_t VAR_5)
{
 const char *VAR_6 = (char *)VAR_4;
 size_t VAR_7, VAR_8, VAR_9, VAR_10;
 int64_t VAR_11;

 *VAR_3 = 0;


 for (VAR_7 = 0, VAR_8 = 0; VAR_7 < VAR_5; VAR_7++, VAR_8++) {
  if (VAR_6[VAR_7] == ' ')
   break;
 }

 if (VAR_8 == VAR_5)
  goto on_error;

 VAR_2->type = FUNC_3(VAR_6, VAR_8);

 VAR_9 = VAR_8 + 1;
 for (VAR_7 = VAR_9, VAR_10 = 0; VAR_7 < VAR_5; VAR_7++, VAR_10++) {
  if (VAR_6[VAR_7] == '\0')
   break;
 }

 if (VAR_7 == VAR_5)
  goto on_error;

 if (FUNC_1(&VAR_11, &VAR_6[VAR_9], VAR_10, ((void*)0), 10) < 0 ||
  VAR_11 < 0)
  goto on_error;

 if ((uint64_t)VAR_11 > VAR_1) {
  FUNC_2(VAR_0, "object is larger than available memory");
  return -1;
 }

 VAR_2->size = (size_t)VAR_11;

 if (FUNC_0(VAR_3, VAR_7, 1))
  goto on_error;

 return 0;

on_error:
 FUNC_2(VAR_0, "failed to parse loose object: invalid header");
 return -1;
}
