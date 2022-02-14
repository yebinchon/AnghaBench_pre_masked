
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xferstat {char* name; void* lastrcvd; void* rcvd; void* offset; void* size; int start; int last; int last2; } ;
typedef void* off_t ;


 int FUNC_0 (int ,char*,char*) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (struct xferstat*,int ,int) ;
 int FUNC_3 (char*,int,char*,char const*) ;
 int FUNC_4 (struct xferstat*,int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static void
FUNC_5(struct xferstat *VAR_3, const char *VAR_4, off_t VAR_5, off_t VAR_6)
{

 FUNC_2(VAR_3, 0, sizeof *VAR_3);
 FUNC_3(VAR_3->name, sizeof VAR_3->name, "%s", VAR_4);
 FUNC_1(&VAR_3->start, ((void*)0));
 VAR_3->last2 = VAR_3->last = VAR_3->start;
 VAR_3->size = VAR_5;
 VAR_3->offset = VAR_6;
 VAR_3->rcvd = VAR_6;
 VAR_3->lastrcvd = VAR_6;
 if (VAR_2)
  FUNC_4(VAR_3, 1);
 else if (VAR_1 > 0)
  FUNC_0(VAR_0, "%-46s", VAR_3->name);
}
