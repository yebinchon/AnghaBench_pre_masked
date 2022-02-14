
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (char const*,char*) ;
 int FUNC_2 (void*,unsigned int,int,int *) ;
 int FUNC_3 (void*) ;
 int FUNC_4 (int *,int ,int ) ;
 unsigned int FUNC_5 (int *) ;
 void* FUNC_6 (unsigned int) ;
 int FUNC_7 (char*,...) ;
 int FUNC_8 (int *) ;

void * FUNC_9(const char * VAR_1)
{
 FILE * VAR_2 = FUNC_1(VAR_1, "rb");
 unsigned int VAR_3;
 void * VAR_4 = ((void*)0);

 if(VAR_2 == ((void*)0))
 {
        FUNC_7("\n\nERROR: %s couldn't be opened!\n\n",VAR_1);
        return ((void*)0);
    }

    FUNC_4 (VAR_2 , 0 , VAR_0);
 VAR_3 = FUNC_5 (VAR_2);
 if(VAR_3 == 0)
 {
        FUNC_7("\n\nERROR: Size of %s is 0!\n\n",VAR_1);
        FUNC_0(VAR_2);
        return ((void*)0);
    }
 FUNC_8 (VAR_2);
 VAR_4 = FUNC_6(VAR_3);
 if(VAR_4 == ((void*)0))
 {
        FUNC_7("\n\nERROR: Not enought memory to load %s!\n\n",VAR_1);
        FUNC_0(VAR_2);
        return ((void*)0);
    }
 if(FUNC_2(VAR_4,VAR_3,1,VAR_2) != 1)
 {
        FUNC_7("\n\nERROR: Error while reading.\n\n");
        FUNC_0(VAR_2);
  FUNC_3(VAR_4);
        return ((void*)0);
    }

 FUNC_0(VAR_2);

 return VAR_4;
}
