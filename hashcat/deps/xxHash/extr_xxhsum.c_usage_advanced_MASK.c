
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int FUNC_1 (char const*) ;

__attribute__((used)) static int FUNC_2(const char* VAR_1)
{
    FUNC_1(VAR_1);
    FUNC_0( "Advanced :\n");
    FUNC_0( " --little-endian : hash printed using little endian convention (default: big endian)\n");
    FUNC_0( " -V, --version   : display version\n");
    FUNC_0( " -h, --help      : display long help and exit\n");
    FUNC_0( " -b  : benchmark mode \n");
    FUNC_0( " -i# : number of iterations (benchmark mode; default %i)\n", VAR_0);
    FUNC_0( "\n");
    FUNC_0( "The following four options are useful only when verifying checksums (-c):\n");
    FUNC_0( "--strict : don't print OK for each successfully verified file\n");
    FUNC_0( "--status : don't output anything, status code shows success\n");
    FUNC_0( "--quiet  : exit non-zero for improperly formatted checksum lines\n");
    FUNC_0( "--warn   : warn about improperly formatted checksum lines\n");
    return 0;
}
