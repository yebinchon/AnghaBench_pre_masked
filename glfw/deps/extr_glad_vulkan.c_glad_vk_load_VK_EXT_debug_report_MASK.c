
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ PFN_vkDestroyDebugReportCallbackEXT ;
typedef scalar_t__ PFN_vkDebugReportMessageEXT ;
typedef scalar_t__ PFN_vkCreateDebugReportCallbackEXT ;
typedef scalar_t__ (* GLADuserptrloadfunc ) (char*,void*) ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static void FUNC_0( GLADuserptrloadfunc VAR_4, void* VAR_5) {
    if(!VAR_0) return;
    VAR_1 = (PFN_vkCreateDebugReportCallbackEXT) VAR_4("vkCreateDebugReportCallbackEXT", VAR_5);
    VAR_2 = (PFN_vkDebugReportMessageEXT) VAR_4("vkDebugReportMessageEXT", VAR_5);
    VAR_3 = (PFN_vkDestroyDebugReportCallbackEXT) VAR_4("vkDestroyDebugReportCallbackEXT", VAR_5);
}
