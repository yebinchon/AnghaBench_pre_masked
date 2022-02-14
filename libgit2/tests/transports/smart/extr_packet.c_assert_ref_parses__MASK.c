
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int name; int oid; } ;
struct TYPE_4__ {int capabilities; TYPE_1__ head; int type; } ;
typedef TYPE_2__ git_pkt_ref ;
typedef int git_pkt ;
typedef int git_oid ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int ,char const*,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,char const*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int **,char const**,char const*,size_t) ;
 int FUNC_8 (char const*) ;

__attribute__((used)) static void FUNC_9(const char *VAR_1, size_t VAR_2, const char *VAR_3,
 const char *VAR_4, const char *VAR_5)
{
 const char *VAR_6;
 git_pkt_ref *VAR_7;
 git_oid VAR_8;

 FUNC_4(FUNC_5(&VAR_8, VAR_3));

 FUNC_4(FUNC_7((git_pkt **) &VAR_7, &VAR_6, VAR_1, VAR_2));
 FUNC_0(VAR_7->type, VAR_0);
 FUNC_1(&VAR_7->head.oid, &VAR_8);
 FUNC_3(VAR_7->head.name, VAR_4, FUNC_8(VAR_4));
 if (VAR_5)
  FUNC_3(VAR_7->capabilities, VAR_5, FUNC_8(VAR_5));
 else
  FUNC_2(((void*)0), VAR_7->capabilities);

 FUNC_6((git_pkt *) VAR_7);
}
