
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int cpath ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int,int ,int*) ;
 int FUNC_2 (char const*,char*) ;
 int VAR_4 ;
 int FUNC_3 (char*,char*,int) ;

__attribute__((used)) static int
FUNC_4(int VAR_5, const char *VAR_6)
{
 uint32_t VAR_7, VAR_8;
 int VAR_9;
 char VAR_10[VAR_0], VAR_11[VAR_0];

 if (!FUNC_2(VAR_6, VAR_11))
  FUNC_3(VAR_11, VAR_10, sizeof(VAR_11));

 VAR_9 = FUNC_1(VAR_5, VAR_2, &VAR_7);

 if (VAR_9 == 0)
  VAR_9 = FUNC_1(VAR_5, VAR_1, &VAR_8);

 if (VAR_9 == 0) {
  FUNC_0(VAR_4,
          "Device name:   %s\n"
          "Device mode:   %d\n"
          "Device speed:  %d\n",
          VAR_11, VAR_7, VAR_8);
 }
 else
  FUNC_0(VAR_4, "Unable to query info (err=%d), errno=%d\n",
      VAR_9, VAR_3);

 return VAR_9;
}
