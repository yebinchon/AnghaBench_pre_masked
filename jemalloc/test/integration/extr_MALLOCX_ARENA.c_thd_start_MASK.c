
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mib ;
typedef int dss_precs ;
typedef int arena_ind ;


 int VAR_0 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (int ,int,char*) ;
 int FUNC_2 (void*,char*) ;
 int FUNC_3 (void*,int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_4 (char*,void*,size_t*,int *,int ) ;
 int FUNC_5 (size_t*,size_t,int *,int *,void*,int) ;
 int FUNC_6 (char*,size_t*,size_t*) ;
 void* FUNC_7 (int,int ) ;

void *
FUNC_8(void *VAR_2) {
 unsigned VAR_3 = (unsigned)(uintptr_t)VAR_2;
 unsigned VAR_4;
 void *VAR_5;
 size_t VAR_6;

 VAR_6 = sizeof(VAR_4);
 FUNC_1(FUNC_4("arenas.create", (void *)&VAR_4, &VAR_6, ((void*)0), 0),
     0, "Error in arenas.create");

 if (VAR_3 % 4 != 3) {
  size_t VAR_7[3];
  size_t VAR_8 = sizeof(VAR_7) / sizeof(size_t);
  const char *VAR_9[] = {"disabled", "primary", "secondary"};
  unsigned VAR_10 = VAR_3 %
      (sizeof(VAR_9)/sizeof(char*));
  const char *VAR_11 = VAR_9[VAR_10];
  int VAR_12 = (VAR_1 || VAR_10 == 0) ? 0 : VAR_0;
  FUNC_1(FUNC_6("arena.0.dss", VAR_7, &VAR_8), 0,
      "Error in mallctlnametomib()");
  VAR_7[1] = VAR_4;
  FUNC_1(FUNC_5(VAR_7, VAR_8, ((void*)0), ((void*)0), (void *)&VAR_11,
      sizeof(const char *)), VAR_12,
      "Error in mallctlbymib()");
 }

 VAR_5 = FUNC_7(1, FUNC_0(VAR_4));
 FUNC_2(VAR_5, "Unexpected mallocx() error");
 FUNC_3(VAR_5, 0);

 return ((void*)0);
}
