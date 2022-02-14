
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int VkPhysicalDevice ;
typedef scalar_t__ PFN_vkEnumerateInstanceVersion ;
typedef scalar_t__ (* GLADuserptrloadfunc ) (char*,void*) ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__ (*) (char*,void*),void*) ;
 int FUNC_3 (scalar_t__ (*) (char*,void*),void*) ;
 int FUNC_4 (scalar_t__ (*) (char*,void*),void*) ;
 int FUNC_5 (scalar_t__ (*) (char*,void*),void*) ;
 int FUNC_6 (scalar_t__ (*) (char*,void*),void*) ;
 scalar_t__ VAR_0 ;

int FUNC_7( VkPhysicalDevice VAR_1, GLADuserptrloadfunc VAR_2, void *VAR_3) {
    int VAR_4;




    VAR_4 = FUNC_0( VAR_1);
    if (!VAR_4) {
        return 0;
    }

    FUNC_5(VAR_2, VAR_3);
    FUNC_6(VAR_2, VAR_3);

    if (!FUNC_1( VAR_1)) return 0;
    FUNC_2(VAR_2, VAR_3);
    FUNC_3(VAR_2, VAR_3);
    FUNC_4(VAR_2, VAR_3);


    return VAR_4;
}
