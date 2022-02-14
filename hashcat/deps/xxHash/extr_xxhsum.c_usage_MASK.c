
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,...) ;
 char* FUNC_1 (char const*) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static int FUNC_2(const char* VAR_1)
{
    FUNC_0( FUNC_1(VAR_1) );
    FUNC_0( "Usage :\n");
    FUNC_0( "      %s [arg] [filenames]\n", VAR_1);
    FUNC_0( "When no filename provided, or - provided : use stdin as input\n");
    FUNC_0( "Arguments :\n");
    FUNC_0( " -H# : hash selection : 0=32bits, 1=64bits (default: %i)\n", (int)VAR_0);
    FUNC_0( " -c  : read xxHash sums from the [filenames] and check them\n");
    FUNC_0( " -h  : help \n");
    return 0;
}
