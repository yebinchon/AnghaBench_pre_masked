
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ stereo; scalar_t__ doublebuffer; scalar_t__ alphaBits; scalar_t__ depthBits; scalar_t__ stencilBits; scalar_t__ auxBuffers; scalar_t__ samples; scalar_t__ transparent; scalar_t__ redBits; scalar_t__ greenBits; scalar_t__ blueBits; scalar_t__ accumRedBits; scalar_t__ accumGreenBits; scalar_t__ accumBlueBits; scalar_t__ accumAlphaBits; scalar_t__ sRGB; } ;
typedef TYPE_1__ _GLFWfbconfig ;


 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;

const _GLFWfbconfig* FUNC_0(const _GLFWfbconfig* VAR_2,
                                         const _GLFWfbconfig* VAR_3,
                                         unsigned int VAR_4)
{
    unsigned int VAR_5;
    unsigned int VAR_6, VAR_7 = VAR_1;
    unsigned int VAR_8, VAR_9 = VAR_1;
    unsigned int VAR_10, VAR_11 = VAR_1;
    const _GLFWfbconfig* VAR_12;
    const _GLFWfbconfig* VAR_13 = ((void*)0);

    for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++)
    {
        VAR_12 = VAR_3 + VAR_5;

        if (VAR_2->stereo > 0 && VAR_12->stereo == 0)
        {

            continue;
        }

        if (VAR_2->doublebuffer != VAR_12->doublebuffer)
        {

            continue;
        }


        {
            VAR_6 = 0;

            if (VAR_2->alphaBits > 0 && VAR_12->alphaBits == 0)
                VAR_6++;

            if (VAR_2->depthBits > 0 && VAR_12->depthBits == 0)
                VAR_6++;

            if (VAR_2->stencilBits > 0 && VAR_12->stencilBits == 0)
                VAR_6++;

            if (VAR_2->auxBuffers > 0 &&
                VAR_12->auxBuffers < VAR_2->auxBuffers)
            {
                VAR_6 += VAR_2->auxBuffers - VAR_12->auxBuffers;
            }

            if (VAR_2->samples > 0 && VAR_12->samples == 0)
            {



                VAR_6++;
            }

            if (VAR_2->transparent != VAR_12->transparent)
                VAR_6++;
        }





        {
            VAR_8 = 0;

            if (VAR_2->redBits != VAR_0)
            {
                VAR_8 += (VAR_2->redBits - VAR_12->redBits) *
                             (VAR_2->redBits - VAR_12->redBits);
            }

            if (VAR_2->greenBits != VAR_0)
            {
                VAR_8 += (VAR_2->greenBits - VAR_12->greenBits) *
                             (VAR_2->greenBits - VAR_12->greenBits);
            }

            if (VAR_2->blueBits != VAR_0)
            {
                VAR_8 += (VAR_2->blueBits - VAR_12->blueBits) *
                             (VAR_2->blueBits - VAR_12->blueBits);
            }
        }


        {
            VAR_10 = 0;

            if (VAR_2->alphaBits != VAR_0)
            {
                VAR_10 += (VAR_2->alphaBits - VAR_12->alphaBits) *
                             (VAR_2->alphaBits - VAR_12->alphaBits);
            }

            if (VAR_2->depthBits != VAR_0)
            {
                VAR_10 += (VAR_2->depthBits - VAR_12->depthBits) *
                             (VAR_2->depthBits - VAR_12->depthBits);
            }

            if (VAR_2->stencilBits != VAR_0)
            {
                VAR_10 += (VAR_2->stencilBits - VAR_12->stencilBits) *
                             (VAR_2->stencilBits - VAR_12->stencilBits);
            }

            if (VAR_2->accumRedBits != VAR_0)
            {
                VAR_10 += (VAR_2->accumRedBits - VAR_12->accumRedBits) *
                             (VAR_2->accumRedBits - VAR_12->accumRedBits);
            }

            if (VAR_2->accumGreenBits != VAR_0)
            {
                VAR_10 += (VAR_2->accumGreenBits - VAR_12->accumGreenBits) *
                             (VAR_2->accumGreenBits - VAR_12->accumGreenBits);
            }

            if (VAR_2->accumBlueBits != VAR_0)
            {
                VAR_10 += (VAR_2->accumBlueBits - VAR_12->accumBlueBits) *
                             (VAR_2->accumBlueBits - VAR_12->accumBlueBits);
            }

            if (VAR_2->accumAlphaBits != VAR_0)
            {
                VAR_10 += (VAR_2->accumAlphaBits - VAR_12->accumAlphaBits) *
                             (VAR_2->accumAlphaBits - VAR_12->accumAlphaBits);
            }

            if (VAR_2->samples != VAR_0)
            {
                VAR_10 += (VAR_2->samples - VAR_12->samples) *
                             (VAR_2->samples - VAR_12->samples);
            }

            if (VAR_2->sRGB && !VAR_12->sRGB)
                VAR_10++;
        }





        if (VAR_6 < VAR_7)
            VAR_13 = VAR_12;
        else if (VAR_6 == VAR_7)
        {
            if ((VAR_8 < VAR_9) ||
                (VAR_8 == VAR_9 && VAR_10 < VAR_11))
            {
                VAR_13 = VAR_12;
            }
        }

        if (VAR_12 == VAR_13)
        {
            VAR_7 = VAR_6;
            VAR_9 = VAR_8;
            VAR_11 = VAR_10;
        }
    }

    return VAR_13;
}
